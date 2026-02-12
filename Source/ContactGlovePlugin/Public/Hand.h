// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Hand.generated.h"

UENUM(BlueprintType)
enum class EHandSides : uint8
{
	Left = 0,
	Right = 1,
	Num = 2 UMETA(Hidden),
};

UENUM(BlueprintType)
enum class EColliderSection : uint8
{
	ThumbDistal = 0,
	IndexDistal = 1,
	MiddleDistal = 2,
	RingDistal = 3,
	Num = 4 UMETA(Hidden),
};

UENUM(BlueprintType)
enum class EFingerSection : uint8
{
	LittleProximal = 0,
	LittleIntermediate = 1,
	LittleDistal = 2,
	RingProximal = 3,
	RingIntermediate = 4,
	RingDistal = 5,
	MiddleProximal = 6,
	MiddleIntermediate = 7,
	MiddleDistal = 8,
	IndexProximal = 9,
	IndexIntermediate = 10,
	IndexDistal = 11,
	ThumbMetacarpal = 12,
	ThumbProximal = 13,
	ThumbDistal = 14,
	ThumbSplay = 15,
	Num = 16 UMETA(Hidden),
};

UENUM(BlueprintType)
enum class EControllerBoolInputType : uint8
{
	A = 0,
	B = 1,
	Home = 2,
	JoystickButton = 3,
	TrackpadTouch = 4,
	Num = 5 UMETA(Hidden),
};

UENUM(BlueprintType)
enum class EControllerFloatInputType : uint8
{
	JoystickX = 0,
	JoystickY = 1,
	Trigger = 2,
	GripValue = 3, 
	GripForce = 4,
	Num = 5 UMETA(Hidden),
};
