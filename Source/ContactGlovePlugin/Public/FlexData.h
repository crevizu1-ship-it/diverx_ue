// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FingerFlexData.h"
#include "ThumbFlexData.h"
#include "FlexData.generated.h"

USTRUCT(Blueprintable)
struct FFlexData
{
	GENERATED_BODY()

	bool bIsValid = false UMETA(Hidden);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="FlexData Struct")
	FFingerFlexData Little;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="FlexData Struct")
	FFingerFlexData Ring;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="FlexData Struct")
	FFingerFlexData Middle;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="FlexData Struct")
	FFingerFlexData Index;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="FlexData Struct")
	FThumbFlexData Thumb;
};