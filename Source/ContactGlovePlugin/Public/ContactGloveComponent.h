// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ContactGloveCallback.h"
#include "ControllerData.h"
#include "Components/ActorComponent.h"
#include "ContactGloveComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFlexDataSignature, const FFlexData&, FlexData);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControllerDataSignature, const FControllerData&, ControllerData);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FControllerInputSignature, const EHandSides&, Hand, const EControllerBoolInputType&, Type);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CONTACTGLOVEPLUGIN_API UContactGloveComponent : public UActorComponent, public IContactGloveCallback
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UContactGloveComponent();
	virtual ~UContactGloveComponent() override;

	UPROPERTY(BlueprintAssignable, Category = "ContactGlove Events")
	FFlexDataSignature OnLeftFlexData;

	UPROPERTY(BlueprintAssignable, Category = "ContactGlove Events")
	FFlexDataSignature OnRightFlexData;

	UPROPERTY(BlueprintAssignable, Category = "ContactGlove Events")
	FControllerDataSignature OnControllerData;

	UPROPERTY(BlueprintAssignable, Category = "ContactGlove Events")
	FControllerInputSignature OnButtonPressed;

	UPROPERTY(BlueprintAssignable, Category = "ContactGlove Events")
	FControllerInputSignature OnButtonReleased;

	UPROPERTY(EditAnywhere, Category = "ContactGlove Property")
	float GrabThreshold;

	UFUNCTION(BlueprintCallable, Category = "ContactGlove Functions")
	void SendVibration(EHandSides Hand, float Frequency, float Amplitude, float Duration);

	UFUNCTION(BlueprintCallable, Category = "ContactGlove Functions")
	void SetHaptics(EHandSides Hand, EColliderSection Section, bool Enable);

	UFUNCTION(BlueprintCallable, Category = "ContactGlove Functions")
	FControllerData GetControllerData(EHandSides Hand);

	UFUNCTION(BlueprintCallable, Category = "ContactGlove Functions")
	FFlexData GetFlexData(EHandSides Hand);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
	bool bCallbackRegistered = false;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void OnLeftFlexDataReceived(FFlexData Data) override;
	virtual void OnRightFlexDataReceived(FFlexData Data) override;
	virtual void OnControllerDataReceived(FControllerData Data) override;
	virtual void OnControllerButtonPressed(const EHandSides Hand, const EControllerBoolInputType Type) override;
	virtual void OnControllerButtonReleased(const EHandSides Hand, const EControllerBoolInputType Type) override;
};
