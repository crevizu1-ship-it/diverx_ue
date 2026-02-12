// Fill out your copyright notice in the Description page of Project Settings.

#include "ContactGloveComponent.h"

#include "ContactGloveInputDevice.h"
#include "ContactGlovePlugin.h"
#include "OscActor.h"


// Sets default values for this component's properties
UContactGloveComponent::UContactGloveComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	bWantsInitializeComponent = true;
	bAutoActivate = true;
}

UContactGloveComponent::~UContactGloveComponent()
{
	// AOscActor* Actor = AOscActor::GetInstance(GetWorld());
	// if (Actor)
	// {
	// 	Actor->RemoveConnectorCallback(this);
	// }
}


void UContactGloveComponent::SendVibration(EHandSides Hand, float Frequency, float Amplitude, float Duration)
{
	AOscActor* Actor = AOscActor::GetInstance(GetWorld());
	if (Actor)
	{
		Actor->SendVibration(Hand, Frequency, Amplitude, Duration);
	}
}

void UContactGloveComponent::SetHaptics(EHandSides Hand, EColliderSection Section, bool Enable)
{
	AOscActor* Actor = AOscActor::GetInstance(GetWorld());
	if (Actor)
	{
		Actor->SetHaptics(Hand, Section, Enable);
	}
}

FControllerData UContactGloveComponent::GetControllerData(EHandSides Hand)
{
	AOscActor* Actor = AOscActor::GetInstance(GetWorld());
	if (Actor)
	{
		return Actor->GetControllerData(Hand);
	}
	return {};
}

FFlexData UContactGloveComponent::GetFlexData(EHandSides Hand)
{
	AOscActor* Actor = AOscActor::GetInstance(GetWorld());
	if (Actor)
	{
		return Actor->GetFlexData(Hand);
	}
	return {};
}

// Called when the game starts
void UContactGloveComponent::BeginPlay()
{
	Super::BeginPlay();

	UWorld * World = GetWorld();
	AOscActor* Actor = AOscActor::GetInstance(World);
	if (Actor)
	{
		Actor->AddConnectorCallback(this);
		bCallbackRegistered = true;
	}
}

void UContactGloveComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	// const TSharedPtr<FContactGloveInputDevice> Device = FContactGlovePluginModule::Get().GetInputDevice();
	// if (Device.Get())
	// {
	// 	Device->Disconnect();
	// 	Device->RemoveConnectorCallback(this);
	// }
	AOscActor* Actor = AOscActor::GetInstance(GetWorld());
	if (Actor)
	{
		Actor->RemoveConnectorCallback(this);
		bCallbackRegistered = false;
	}
}


// Called every frame
void UContactGloveComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if(!bCallbackRegistered)
	{
		UWorld * World = GetWorld();
		AOscActor* Actor = AOscActor::GetInstance(World);
		if (Actor)
		{
			Actor->AddConnectorCallback(this);
			bCallbackRegistered = true;
		}
	}
}

void UContactGloveComponent::OnLeftFlexDataReceived(FFlexData Data)
{
	OnLeftFlexData.Broadcast(Data);
}

void UContactGloveComponent::OnRightFlexDataReceived(FFlexData Data)
{
	OnRightFlexData.Broadcast(Data);
}

void UContactGloveComponent::OnControllerDataReceived(FControllerData Data)
{
	OnControllerData.Broadcast(Data);
}

void UContactGloveComponent::OnControllerButtonPressed(const EHandSides Hand, const EControllerBoolInputType Type)
{
	OnButtonPressed.Broadcast(Hand, Type);
}

void UContactGloveComponent::OnControllerButtonReleased(const EHandSides Hand, const EControllerBoolInputType Type)
{
	OnButtonReleased.Broadcast(Hand, Type);
}

