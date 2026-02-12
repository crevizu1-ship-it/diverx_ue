// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Hand.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "ContactGloveHapticsHandler.generated.h"

UCLASS()
class CONTACTGLOVEPLUGIN_API AContactGloveHapticsHandler : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AContactGloveHapticsHandler();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void OnConstruction(const FTransform& Transform) override;

public:

	UPROPERTY(EditAnywhere, Category="HapticsHandler")
	TObjectPtr<USkeletalMeshComponent> HandComponent;
	
	UPROPERTY(EditAnywhere, Category="HapticsHandler")
	TObjectPtr<USceneComponent> DefaultSceneRoot;
	
	UPROPERTY(EditAnywhere, Category="HapticsHandler")
	EHandSides Hand;

	UPROPERTY(EditAnywhere, Category="HapticsHandler")
	TMap<EColliderSection, FName> BoneMap;

	UPROPERTY(EditAnywhere, Category="HapticsHandler")
	float ColliderRadius = 0.02f;

	UPROPERTY(EditAnywhere, Category="HapticsHandler")
	TMap<EColliderSection, TObjectPtr<USphereComponent>> ColliderComponentMap;

	UPROPERTY(EditAnywhere, Category="HapticsHandler")
	TMap<EColliderSection, FVector> ColliderOffsetMap;
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	UFUNCTION()
	void OnExit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
