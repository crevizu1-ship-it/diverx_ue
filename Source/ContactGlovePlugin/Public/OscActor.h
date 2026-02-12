// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ContactGloveComponent.h"
#include "HapticsContext.h"
#include "IHapticDevice.h"
#include "IInputDevice.h"
#include "OscCommunicator.h"
#include "OSCServer.h"
#include "OscActor.generated.h"

#define CLIENT_PORT 25790
#define SERVER_PORT 25788
#define ADDRESS "127.0.0.1"

UCLASS()
class CONTACTGLOVEPLUGIN_API AOscActor : public AActor
{
	GENERATED_BODY()

public:
	static AOscActor* GetInstance(UWorld* World);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FFlexData GetFlexData(const EHandSides Hand) const;
	FControllerData GetControllerData(EHandSides Hand) const;
	void AddConnectorCallback(IContactGloveCallback* Component);
	void RemoveConnectorCallback(IContactGloveCallback* Component);

	void SendVibration(EHandSides Hand, float Frequency, float Amplitude, float Duration);
	void SetHaptics(EHandSides Hand, EColliderSection Section, bool Enable);
	void SetAllHapticsOff();

private:
	static TMap<UWorld*, AOscActor*> Instances;
	
	// Sets default values for this actor's properties
	AOscActor();

	UPROPERTY()
	UOSCServer *Server;
	UdpTransmitSocket *Client;
	
	FCriticalSection Mutex;
	TArray<IContactGloveCallback*> EventDelegates;	   // delegate storage
	
	FFlexData NowLeftFlexData = {};
	FFlexData NowRightFlexData = {};

	FControllerData PreLeftControllerData = {};
	FControllerData PreRightControllerData = {};
	FControllerData NowLeftControllerData = {};
	FControllerData NowRightControllerData = {};
	
	FHapticsContext HapticsContext;
	FDateTime LastHapticsSendTime;

	UdpTransmitSocket* GetClient();
	void AddRoute(const FString &AddressPattern, const FName &MethodName);
	void CallFunctionOnComponents(TFunction<void(IContactGloveCallback*)> InFunction);
	void SendHaptics();

	UFUNCTION()
	void OnFingerRotLeftReceived(const FOSCAddress& AddressPattern, const FOSCMessage& Message, const FString& IPAddress, int32 Port);

	UFUNCTION()
	void OnFingerRotRightReceived(const FOSCAddress& AddressPattern, const FOSCMessage& Message, const FString& IPAddress, int32 Port);

	UFUNCTION()
	void OnControllerInputReceived(const FOSCAddress& AddressPattern, const FOSCMessage& Message, const FString& IPAddress, int32 Port);
};
