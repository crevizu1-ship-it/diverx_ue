#include "ContactGloveInputDevice.h"

#include "AsyncTool.h"
#include "ContactGlovePluginBPLibrary.h"
#include "OscAddress.h"


FContactGloveInputDevice::FContactGloveInputDevice(const TSharedRef<FGenericApplicationMessageHandler>& MessageHandler)
	: MessageHandler(MessageHandler)
{
	OscCommunicator.BindAddress(TEXT("/DivingStation/FingerRotLeft"), [this](const auto& Message)
	{
		const TArray<uint8>& RawData = GetBytes(Message);
		const FFlexData& FlexData = UContactGlovePluginBPLibrary::ExtractFlexData(RawData);
		NowLeftFlexData = FlexData;
		CallFunctionOnComponents([FlexData](IContactGloveCallback* Component)
		{
			Component->OnLeftFlexDataReceived(FlexData);
		});
	});

	OscCommunicator.BindAddress(TEXT("/DivingStation/FingerRotRight"), [this](const auto& Message)
	{
		const TArray<uint8>& RawData = GetBytes(Message);
		const FFlexData& FlexData = UContactGlovePluginBPLibrary::ExtractFlexData(RawData);
		NowRightFlexData = FlexData;
		CallFunctionOnComponents([FlexData](IContactGloveCallback* Component)
		{
			Component->OnRightFlexDataReceived(FlexData);
		});
	});

	OscCommunicator.BindAddress(TEXT("/DivingStation/ControllerInput"), [this](const auto& Message)
	{
		const TArray<uint8>& RawData = GetBytes(Message);
		const FControllerData& ControllerData = UContactGlovePluginBPLibrary::ExtractControllerData(RawData);
		if(!ControllerData.bIsValid)
		{
			return;
		}
		
		const EHandSides Hand = ControllerData.Hand;
		if(Hand == EHandSides::Left)
		{
			PreLeftControllerData = NowLeftControllerData;
			NowLeftControllerData = ControllerData;
		}
		else
		{
			PreRightControllerData = NowRightControllerData;
			NowRightControllerData = ControllerData;
		}

		const FControllerData& PreData = Hand == EHandSides::Left ?
			PreLeftControllerData : PreRightControllerData;
		const FControllerData& NowData = Hand == EHandSides::Left ?
			NowLeftControllerData : NowRightControllerData;
		for(int i = 0; i < static_cast<int>(EControllerBoolInputType::Num); i++)
        {
         	const EControllerBoolInputType Type = static_cast<EControllerBoolInputType>(i);
         	if(!PreData.GetControllerInput(Type) && NowData.GetControllerInput(Type))
         	{
         		CallFunctionOnComponents([Hand, Type](IContactGloveCallback* Component)
				{
					Component->OnControllerButtonPressed(Hand, Type);
				});
         	}
			if(PreData.GetControllerInput(Type) && !NowData.GetControllerInput(Type))
			{
				CallFunctionOnComponents([Hand, Type](IContactGloveCallback* Component)
			   {
				   Component->OnControllerButtonReleased(Hand, Type);
			   });
			}
        }
		CallFunctionOnComponents([ControllerData](IContactGloveCallback* Component)
		{
			Component->OnControllerDataReceived(ControllerData);
		});
	});

	// Connect();
}

FContactGloveInputDevice::~FContactGloveInputDevice()
{
	Disconnect();
}

void FContactGloveInputDevice::Tick(float DeltaTime)
{
	const FDateTime Now = FDateTime::Now();
	if((Now - LastHapticsSendTime).GetTotalSeconds() > 0.08)
	{
		this->SendHaptics();
	}
}

IHapticDevice* FContactGloveInputDevice::GetHapticDevice()
{
	return IInputDevice::GetHapticDevice();
}

void FContactGloveInputDevice::SendControllerEvents()
{
}

void FContactGloveInputDevice::SetMessageHandler(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler)
{
	MessageHandler = InMessageHandler;
}

void FContactGloveInputDevice::AddConnectorCallback(IContactGloveCallback* Component)
{
	EventDelegates.AddUnique(Component);
}

void FContactGloveInputDevice::RemoveConnectorCallback(IContactGloveCallback* Component)
{
	EventDelegates.Remove(Component);
}

void FContactGloveInputDevice::Connect()
{
	OscCommunicator.Run();
}

void FContactGloveInputDevice::Disconnect()
{
	OscCommunicator.Break();
}

void FContactGloveInputDevice::SendVibration(EHandSides Hand, float Frequency, float Amplitude, float Duration)
{
	char Buffer[OUTPUT_BUFFER_SIZE];
	osc::OutboundPacketStream p( Buffer, OUTPUT_BUFFER_SIZE );
    
	p << osc::BeginMessage( "/DivingStation/HapticVibration" ) 
			<< (Hand == EHandSides::Left ? 0.0f : 1.0f)
			<< Frequency << Amplitude << Duration << osc::EndMessage;
    
	OscCommunicator.Send(p);
}

void FContactGloveInputDevice::SetHaptics(EHandSides Hand, EColliderSection Section, bool Enable)
{
	if(Hand == EHandSides::Left)
	{
		HapticsContext.LeftHaptics.SetHaptics(Section, Enable);
	}
	else
	{
		HapticsContext.RightHaptics.SetHaptics(Section, Enable);
	}
	this->SendHaptics();
}

void FContactGloveInputDevice::SetAllHapticsOff()
{
	for(int i = 0;i < static_cast<int>(EColliderSection::Num); i++)
	{
		const EColliderSection ColliderSection = static_cast<EColliderSection>(i);
		HapticsContext.LeftHaptics.SetHaptics(ColliderSection, false);
		HapticsContext.RightHaptics.SetHaptics(ColliderSection, false);
	}
	this->SendHaptics();
}

void FContactGloveInputDevice::CallFunctionOnComponents(TFunction<void(IContactGloveCallback*)> InFunction)
{
	if (EventDelegates.Num() <= 0)
	{
		return;
	}

	if (IsInGameThread())
	{
		for (IContactGloveCallback* EventDelegate : EventDelegates)
		{
			InFunction(EventDelegate);
		}
	}
	else
	{
		FAsyncTool::RunShortLambdaOnGameThread([this, InFunction] {
			for (IContactGloveCallback* EventDelegate : EventDelegates)
			{
				InFunction(EventDelegate);
			}
		});
	}
}

void FContactGloveInputDevice::SendHaptics()
{
	char buffer[OUTPUT_BUFFER_SIZE];
	osc::OutboundPacketStream p( buffer, OUTPUT_BUFFER_SIZE );

	TArray<uint8> HapticsData = HapticsContext.GetBytes();
	const uint8 * Data = HapticsData.GetData();
	const osc::Blob Blob(Data, HapticsData.Num());
    
	p << osc::BeginMessage( "/DivingStation/CollisionSignal" ) 
			<< Blob << osc::EndMessage;
    
	OscCommunicator.Send(p);
	LastHapticsSendTime = FDateTime::Now();
}

TArray<uint8> FContactGloveInputDevice::GetBytes(const osc::ReceivedMessage& Message)
{
	osc::Blob Blob;
	osc::ReceivedMessageArgumentStream Args = Message.ArgumentStream();
	Args >> Blob >> osc::EndMessage;

	const char * RawData = static_cast<const char*>(Blob.data);
	TArray<uint8> Data;
	for(int i = 0;i < Blob.size; i++)
	{
		Data.Add(RawData[i]);
	}
	return Data;
}

void FContactGloveInputDevice::SetHapticFeedbackValues(int32 ControllerId, int32 Hand,
	const FHapticFeedbackValues& Values)
{
	EHandSides HandSide;
	const EControllerHand ControllerHand = static_cast<EControllerHand>(Hand);

	switch (ControllerHand)
	{
	case EControllerHand::Left:
		HandSide = EHandSides::Left;
		break;
	case EControllerHand::Right:
		HandSide = EHandSides::Right;
		break;
	default:
		HandSide = EHandSides::Left;
		break;
	}

	SendVibration(HandSide, Values.Frequency, Values.Amplitude, 0.1f);
}

void FContactGloveInputDevice::GetHapticFrequencyRange(float& MinFrequency, float& MaxFrequency) const
{
	MinFrequency = 10.0f;
	MaxFrequency = 500.0f;
}

float FContactGloveInputDevice::GetHapticAmplitudeScale() const
{
	return 1.f;
}

FFlexData FContactGloveInputDevice::GetFlexData(EHandSides Hand)
{
	if(Hand == EHandSides::Left)
	{
		return NowLeftFlexData;
	}
	else
	{
		return NowRightFlexData;
	}
}

FControllerData FContactGloveInputDevice::GetControllerData(EHandSides Hand)
{
	if(Hand == EHandSides::Left)
	{
		return NowLeftControllerData;
	}
	else
	{
		return NowRightControllerData;
	}
}
