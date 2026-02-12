// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Hand.h"
#include "ControllerData.generated.h"

USTRUCT(Blueprintable)
struct FControllerData
{
	GENERATED_BODY()

	bool bIsValid = false UMETA(Hidden);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="ContactGlovePlugnig")
	EHandSides Hand = EHandSides::Left;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="ControllerInput Struct")
	bool A = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="ControllerInput Struct")
	bool B = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="ControllerInput Struct")
	bool Home = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="ControllerInput Struct")
	bool JoystickButton = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="ControllerInput Struct")
	bool TrackpadTouch = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="ControllerInput Struct")
	float JoystickX = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="ControllerInput Struct")
	float JoystickY = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="ControllerInput Struct")
	float Trigger = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="ControllerInput Struct")
	float GripValue = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="ControllerInput Struct")
	float GripForce = 0.f;

	bool GetControllerInput(const EControllerBoolInputType Type) const
	{
		switch(Type)
		{
		case EControllerBoolInputType::A:
			return A;
		case EControllerBoolInputType::B:
			return B;
		case EControllerBoolInputType::Home:
			return Home;
		case EControllerBoolInputType::JoystickButton:
			return JoystickButton;
		case EControllerBoolInputType::TrackpadTouch:
			return TrackpadTouch;
		default:
			UE_LOG(LogTemp, Error, TEXT("Unhandled Exception"));
		}
		return false;
	}

	float GetControllerInput(const EControllerFloatInputType Type) const
	{
		switch(Type)
		{
		case EControllerFloatInputType::Trigger:
			return Trigger;
		case EControllerFloatInputType::GripForce:
			return GripForce;
		case EControllerFloatInputType::GripValue:
			return GripValue;
		case EControllerFloatInputType::JoystickX:
			return JoystickX;
		case EControllerFloatInputType::JoystickY:
			return JoystickY;
		default:
			UE_LOG(LogTemp, Error, TEXT("Unhandled Exception"));
		}
		return false;
	}
	
};