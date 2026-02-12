// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ThumbFlexData.generated.h"

USTRUCT(Blueprintable)
struct FThumbFlexData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="ThumbFlexData Struct")
	float Metacarpal = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="ThumbFlexData Struct")
	float Proximal = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="ThumbFlexData Struct")
	float Distal = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="ThumbFlexData Struct")
	float Splay = 0.0f;
};