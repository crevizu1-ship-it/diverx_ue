// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FingerFlexData.generated.h"

USTRUCT(Blueprintable)
struct FFingerFlexData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="FingerFlexData Struct")
	float Proximal = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="FingerFlexData Struct")
	float Intermediate = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="FingerFlexData Struct")
	float Distal = 0.0f;
};