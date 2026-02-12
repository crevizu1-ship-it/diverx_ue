// Fill out your copyright notice in the Description page of Project Settings.


#include "OscActor.h"

#include "AsyncTool.h"
#include "ContactGloveCallback.h"
#include "ContactGlovePluginBPLibrary.h"
#include "FlexData.h"
#include "OSCManager.h"
#include "OSCServer.h"
#include "ContactGlovePlugin/Public/OscAddress.h"
#include "Kismet/GameplayStatics.h"

TMap<UWorld*, AOscActor*> AOscActor::Instances;

AOscActor* AOscActor::GetInstance(UWorld* World)
{
	if (!World) return nullptr;

	if (!World->IsGameWorld()) return nullptr;

	AOscActor*& Instance = Instances.FindOrAdd(World);
	if (!Instance || !Instance->IsValidLowLevel())
	{
		Instance = World->SpawnActor<AOscActor>();
		Instances[World] = Instance;
	}

	return Instance;
}

// Sets default values
AOscActor::AOscActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AOscActor::OnFingerRotLeftReceived(const FOSCAddress& AddressPattern, const FOSCMessage& Message, const FString& IPAddress, int32 Port)
{
	TArray<uint8> RawData;
	UOSCManager::GetBlob(Message, 0, RawData);
	const FFlexData& FlexData = UContactGlovePluginBPLibrary::ExtractFlexData(RawData);
	NowLeftFlexData = FlexData;
	CallFunctionOnComponents([FlexData](IContactGloveCallback* Component)
	{
		Component->OnLeftFlexDataReceived(FlexData);
	});
}

void AOscActor::OnFingerRotRightReceived(const FOSCAddress& AddressPattern, const FOSCMessage& Message, const FString& IPAddress, int32 Port)
{
	TArray<uint8> RawData;
	UOSCManager::GetBlob(Message, 0, RawData);
	const FFlexData& FlexData = UContactGlovePluginBPLibrary::ExtractFlexData(RawData);
	NowRightFlexData = FlexData;
	CallFunctionOnComponents([FlexData](IContactGloveCallback* Component)
	{
		Component->OnRightFlexDataReceived(FlexData);
	});
}

void AOscActor::OnControllerInputReceived(const FOSCAddress& AddressPattern, const FOSCMessage& Message, const FString& IPAddress, int32 Port)
{
	TArray<uint8> RawData;
	UOSCManager::GetBlob(Message, 0, RawData);
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
}

void AOscActor::CallFunctionOnComponents(TFunction<void(IContactGloveCallback*)> InFunction)
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

FFlexData AOscActor::GetFlexData(const EHandSides Hand) const
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

FControllerData AOscActor::GetControllerData(EHandSides Hand) const
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

// Called when the game starts or when spawned
void AOscActor::BeginPlay()
{
	Super::BeginPlay();

	// if Instances[World] is not this, destory this
	if (!Instances.Contains(GetWorld()) || Instances[GetWorld()] != this)
	{
		Destroy();
		return;
	}

	// OscComponent = NewObject<UOscComponent>(this, UOscComponent::StaticClass());
	Server = UOSCManager::CreateOSCServer(ADDRESS, SERVER_PORT, false, false, "");

	AddRoute(OscAddress::LeftFlexAddress, FName(TEXT("OnFingerRotLeftReceived")));
	AddRoute(OscAddress::RightFlexAddress, FName(TEXT("OnFingerRotRightReceived")));
	AddRoute(OscAddress::ControllerAddress, FName(TEXT("OnControllerInputReceived")));

	Server->Listen();
}

void AOscActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if(Server)
	{
		Server->Stop();
	}
	if(Client)
	{
		delete Client;
		Client = nullptr;
	}
	Super::EndPlay(EndPlayReason);
	Destroy();
}

void AOscActor::AddRoute(const FString &AddressPattern, const FName &MethodName)
{
	FOSCDispatchMessageEventBP Event;
	Event.BindUFunction(this, MethodName);
	Server->BindEventToOnOSCAddressPatternMatchesPath(FOSCAddress(AddressPattern), Event);
}

void AOscActor::AddConnectorCallback(IContactGloveCallback* Component)
{
	EventDelegates.AddUnique(Component);
}

void AOscActor::RemoveConnectorCallback(IContactGloveCallback* Component)
{
	EventDelegates.Remove(Component);
}

UdpTransmitSocket* AOscActor::GetClient()
{
	if(!Client)
	{
		Client = new UdpTransmitSocket(IpEndpointName(ADDRESS, CLIENT_PORT));
	}
	return Client;
}

void AOscActor::SendVibration(EHandSides Hand, float Frequency, float Amplitude, float Duration)
{
	char Buffer[OUTPUT_BUFFER_SIZE];
	osc::OutboundPacketStream p( Buffer, OUTPUT_BUFFER_SIZE );
    
	p << osc::BeginMessage( OscAddress::VibrationAddress )
			<< (Hand == EHandSides::Left ? 0.0f : 1.0f)
			<< Frequency << Amplitude << Duration << osc::EndMessage;

	GetClient()->Send(p.Data(), p.Size());
}

void AOscActor::SetHaptics(EHandSides Hand, EColliderSection Section, bool Enable)
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

void AOscActor::SetAllHapticsOff()
{
	for(int i = 0;i < static_cast<int>(EColliderSection::Num); i++)
	{
		const EColliderSection ColliderSection = static_cast<EColliderSection>(i);
		HapticsContext.LeftHaptics.SetHaptics(ColliderSection, false);
		HapticsContext.RightHaptics.SetHaptics(ColliderSection, false);
	}
	this->SendHaptics();
}


void AOscActor::SendHaptics()
{
	char buffer[OUTPUT_BUFFER_SIZE];
	osc::OutboundPacketStream p( buffer, OUTPUT_BUFFER_SIZE );

	TArray<uint8> HapticsData = HapticsContext.GetBytes();
	const uint8 * Data = HapticsData.GetData();
	const osc::Blob Blob(Data, HapticsData.Num());
    
	p << osc::BeginMessage( "/DivingStation/CollisionSignal" ) 
			<< Blob << osc::EndMessage;

	GetClient()->Send(p.Data(), p.Size());
}


// Called every frame
void AOscActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	const FDateTime Now = FDateTime::Now();
	if((Now - LastHapticsSendTime).GetTotalSeconds() > 0.08)
	{
		this->SendHaptics();
	}
}

