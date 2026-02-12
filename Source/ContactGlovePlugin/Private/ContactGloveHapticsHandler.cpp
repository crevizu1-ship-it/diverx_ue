// Fill out your copyright notice in the Description page of Project Settings.


#include "ContactGloveHapticsHandler.h"

#include "ContactGloveInputDevice.h"
#include "ContactGlovePlugin.h"
#include "ContactGlovePluginBPLibrary.h"
#include "Kismet/KismetMathLibrary.h"


// Sets default values
AContactGloveHapticsHandler::AContactGloveHapticsHandler()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = DefaultSceneRoot;

	for(int i = 0;i < static_cast<int>(EColliderSection::Num); i++)
	{
		const EColliderSection ColliderSection = static_cast<EColliderSection>(i);
		BoneMap.Add(ColliderSection, FName(""));

		const FString ColliderName = FString::Printf(TEXT("Collider_%d"), i);
		TObjectPtr<USphereComponent> Collider = CreateDefaultSubobject<USphereComponent>(FName(ColliderName));
		Collider->SetRelativeScale3D(FVector(ColliderRadius, ColliderRadius, ColliderRadius));
		Collider->OnComponentBeginOverlap.AddDynamic(this, &AContactGloveHapticsHandler::OnEnter);
		Collider->OnComponentEndOverlap.AddDynamic(this, &AContactGloveHapticsHandler::OnExit);
		Collider->SetupAttachment(RootComponent);
		ColliderComponentMap.Add(ColliderSection, Collider);
	
		ColliderOffsetMap.Add(ColliderSection, FVector::ZeroVector);
	}
}

// Called when the game starts or when spawned
void AContactGloveHapticsHandler::BeginPlay()
{
	Super::BeginPlay();

	if(HandComponent)
	{
		HandComponent->SetRelativeLocation(FVector::ZeroVector);
	}
}

void AContactGloveHapticsHandler::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	const TSharedPtr<FContactGloveInputDevice> Device = FContactGlovePluginModule::Get().GetInputDevice();
	if(Device)
	{
		Device->SetAllHapticsOff();
	}
}

void AContactGloveHapticsHandler::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	
	if(HandComponent)
	{
		HandComponent->SetupAttachment(RootComponent);
	}

	for(int i = 0;i < static_cast<int>(EColliderSection::Num); i++)
	{
		const EColliderSection ColliderSection = static_cast<EColliderSection>(i);

		const TObjectPtr<USphereComponent>* Collider = ColliderComponentMap.Find(ColliderSection);
		if(Collider && Collider->Get())
		{
			(*Collider)->SetRelativeScale3D(FVector(ColliderRadius, ColliderRadius, ColliderRadius));
		}
	}
}

// Called every frame
void AContactGloveHapticsHandler::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	for(int i = 0;i < static_cast<int>(EColliderSection::Num); i++)
	{
		const EColliderSection ColliderSection = static_cast<EColliderSection>(i);
		const TObjectPtr<USphereComponent> *Collider = ColliderComponentMap.Find(ColliderSection);
		const FName *BoneName = BoneMap.Find(ColliderSection);
		const FVector *Offset = ColliderOffsetMap.Find(ColliderSection);
		if(Collider && *Collider && BoneName && Offset)
		{
			const FTransform& Transform = HandComponent->GetSocketTransform(*BoneName);
			const FVector WorldLocation = Transform.GetLocation();;
			const FVector OffsetLocation = UKismetMathLibrary::TransformDirection(Transform, *Offset);
			(*Collider)->SetWorldLocation(WorldLocation + OffsetLocation);
		}
	}
}

void AContactGloveHapticsHandler::OnEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(OtherActor == this)
	{
		return;
	}
	for(int i = 0;i < static_cast<int>(EColliderSection::Num); i++)
	{
		const EColliderSection ColliderSection = static_cast<EColliderSection>(i);
		const TObjectPtr<USphereComponent>* Collider = ColliderComponentMap.Find(ColliderSection);
		if(Collider && *Collider && OverlappedComponent == *Collider)
		{
			const TSharedPtr<FContactGloveInputDevice> Device = FContactGlovePluginModule::Get().GetInputDevice();
			if(Device.Get())
			{
				Device->SetHaptics(Hand, ColliderSection, true);
			}
			return;
		}
	}
}

void AContactGloveHapticsHandler::OnExit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if(OtherActor == this)
	{
		return;
	}
	for(int i = 0;i < static_cast<int>(EColliderSection::Num); i++)
	{
		const EColliderSection ColliderSection = static_cast<EColliderSection>(i);
		const TObjectPtr<USphereComponent>* Collider = ColliderComponentMap.Find(ColliderSection);
		if(Collider && *Collider && OverlappedComponent == *Collider)
		{
			const TSharedPtr<FContactGloveInputDevice> Device = FContactGlovePluginModule::Get().GetInputDevice();
			if(Device.Get())
			{
				Device->SetHaptics(Hand, ColliderSection, false);
			}
			return;
		}
	}
}

