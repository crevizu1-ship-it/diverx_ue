// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Hand.h"
#include "HapticsContext.generated.h"

USTRUCT()
struct FEachHapticsContext
{
	GENERATED_BODY()
	bool Thumb = false, Index = false, Middle = false, Ring = false;

	void SetHaptics(EColliderSection Section, bool Enable)
	{
		switch (Section)
		{
		case EColliderSection::ThumbDistal:
			Thumb = Enable;
			break;
		case EColliderSection::IndexDistal:
			Index = Enable;
			break;
		case EColliderSection::MiddleDistal:
			Middle = Enable;
			break;
		case EColliderSection::RingDistal:
			Ring = Enable;
			break;
		default:
			break;
		}
	}

	TArray<uint8> GetBytes() const
	{
		TArray<uint8> Ret = {
			static_cast<uint8>((Thumb ? 15 : 0) + ((Index ? 15 : 0) << 4)),
			static_cast<uint8>((Middle? 15 : 0) + ((Ring  ? 15 : 0) << 4)),
			static_cast<uint8>(15 << 4),
		};
		return Ret;
	}
};

USTRUCT()
struct FHapticsContext
{
	GENERATED_BODY()

	FEachHapticsContext LeftHaptics;
	FEachHapticsContext RightHaptics;

	
	static void ShowArray(TArray<uint8> Bytes, FString Title)
	{
		FString OutputText = Title;

		for (const uint8 Element : Bytes)
		{
			OutputText += FString::Printf(TEXT("%d, "), Element);
		}

		UE_LOG(LogTemp, Log, TEXT("%s\n"), *OutputText);
	}

	TArray<uint8> GetBytes()
	{
		TArray<uint8> LeftBytes = LeftHaptics.GetBytes();
		TArray<uint8> RightBytes = RightHaptics.GetBytes();
		LeftBytes.Append(RightBytes);
		// ShowArray(LeftBytes, TEXT("ComposedBytes: "));
		
		return LeftBytes;
	}
};
