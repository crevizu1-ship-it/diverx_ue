#pragma once
#include "ContactGloveComponent.h"
#include "HapticsContext.h"
#include "IHapticDevice.h"
#include "IInputDevice.h"
#include "OscCommunicator.h"

#include "osc/OscReceivedElements.h"
#include "osc/OscPacketListener.h"
#include "osc/OscTypes.h"
#include "ip/UdpSocket.h"


class FContactGloveInputDevice : public IInputDevice,
                                 public IHapticDevice
{
public:
	explicit FContactGloveInputDevice(const TSharedRef<FGenericApplicationMessageHandler>& MessageHandler);
	virtual ~FContactGloveInputDevice() override;

	/** Tick the interface (e.g. check for new controllers) */
	virtual void Tick(float DeltaTime) override;

	virtual IHapticDevice *GetHapticDevice() override;

	/** Poll for controller state and send events if needed */
	virtual void SendControllerEvents() override;

	/** Set which MessageHandler will get the events from SendControllerEvents. */
	virtual void SetMessageHandler(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler) override;

	/** Exec handler to allow console commands to be passed through for debugging */
	virtual bool Exec(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar) override
	{
		return false;
	}

	virtual void SetChannelValue(int32 ControllerId, FForceFeedbackChannelType ChannelType, float Value) override
	{
	}
	virtual void SetChannelValues(int32 ControllerId, const FForceFeedbackValues& values) override
	{
	}

	void AddConnectorCallback(IContactGloveCallback * Component);
	void RemoveConnectorCallback(IContactGloveCallback * Component);
	void Connect();
	void Disconnect();

	void SendVibration(EHandSides Hand, float Frequency, float Amplitude, float Duration);
	void SetHaptics(EHandSides Hand, EColliderSection Section, bool Enable);
	void SetAllHapticsOff();

private:
	// Private UProperties

	FOscCommunicator OscCommunicator;
	
	TArray<IContactGloveCallback*> EventDelegates;	   // delegate storage

	FFlexData NowLeftFlexData = {};
	FFlexData NowRightFlexData = {};

	FControllerData PreLeftControllerData = {};
	FControllerData PreRightControllerData = {};
	FControllerData NowLeftControllerData = {};
	FControllerData NowRightControllerData = {};

	FHapticsContext HapticsContext;
	FDateTime LastHapticsSendTime;
	
	// Private utility methods
	void CallFunctionOnComponents(TFunction<void(IContactGloveCallback*)> InFunction);	   // lambda multi-cast convenience wrapper
	void SendHaptics();

	static TArray<uint8> GetBytes(const osc::ReceivedMessage& Message);

public:
	virtual void SetHapticFeedbackValues(int32 ControllerId, int32 Hand, const FHapticFeedbackValues& Values) override;
	virtual void GetHapticFrequencyRange(float& MinFrequency, float& MaxFrequency) const override;
	virtual float GetHapticAmplitudeScale() const override;

	FFlexData GetFlexData(EHandSides Hand);
	FControllerData GetControllerData(EHandSides Hand);
};
