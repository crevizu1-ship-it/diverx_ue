// Copyright Epic Games, Inc. All Rights Reserved.

#include "ContactGlovePluginBPLibrary.h"
#include "ContactGlovePlugin.h"
#include "Kismet/KismetMaterialLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

UContactGlovePluginBPLibrary::UContactGlovePluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UContactGlovePluginBPLibrary::BytesToFloatLittleEndian(uint8 Byte1, uint8 Byte2, uint8 Byte3, uint8 Byte4)
{
	uint32_t IntValue = 0;

	IntValue |= Byte1;
	IntValue |= (static_cast<uint32_t>(Byte2) << 8);
	IntValue |= (static_cast<uint32_t>(Byte3) << 16);
	IntValue |= (static_cast<uint32_t>(Byte4) << 24);

	float FloatValue;
	memcpy(&FloatValue, &IntValue, sizeof(float));

	return FloatValue;
}

float UContactGlovePluginBPLibrary::ExtractFloatValue(const TArray<uint8>& Bytes, const int StartIndex)
{
	return BytesToFloatLittleEndian(
		Bytes[StartIndex],
		Bytes[StartIndex + 1],
		Bytes[StartIndex + 2],
		Bytes[StartIndex + 3]);
}

FFlexData UContactGlovePluginBPLibrary::ExtractFlexData(const TArray<uint8>& Bytes)
{
	const FFlexData FlexData = {
		true,
		{
			ExtractFloatValue(Bytes, 0 * 4),
			ExtractFloatValue(Bytes, 1 * 4),
			ExtractFloatValue(Bytes, 2 * 4),
		},
		{
			ExtractFloatValue(Bytes, 3 * 4),
			ExtractFloatValue(Bytes, 4 * 4),
			ExtractFloatValue(Bytes, 5 * 4),
		},
		{
			ExtractFloatValue(Bytes, 6 * 4),
			ExtractFloatValue(Bytes, 7 * 4),
			ExtractFloatValue(Bytes, 8 * 4),
		},
		{
			ExtractFloatValue(Bytes, 9 * 4),
			ExtractFloatValue(Bytes, 10 * 4),
			ExtractFloatValue(Bytes, 11 * 4),
		},
		{
			ExtractFloatValue(Bytes, 12 * 4),
			ExtractFloatValue(Bytes, 13 * 4),
			ExtractFloatValue(Bytes, 14 * 4),
			ExtractFloatValue(Bytes, 15 * 4),
		}
	};

	FString Text = TEXT("");
	for(const uint8 Byte : Bytes)
	{
		FString Append = FString::Printf(TEXT("%d "), Byte);
		Text += Append;
	}
	// UE_LOG(LogTemp, Log, TEXT("[Flex Data] %s\n"), *Text);
	// UE_LOG(LogTemp, Log, TEXT("[Index Mcp] %f\n"), FlexData.Index.Proximal);
	return FlexData;
}

FControllerData UContactGlovePluginBPLibrary::ExtractControllerData(const TArray<uint8>& Bytes)
{
	
	FControllerData NowData;

	for(int i = 0; i < 11; i++)
	{
		if(Bytes[i] >= 2)
		{
			NowData.bIsValid = false;
			return NowData;
		}
	}

	NowData.Hand = static_cast<EHandSides>(Bytes[0]);
	NowData.A = Bytes[1] == 1;
	NowData.B = Bytes[2] == 1;
	NowData.Home = Bytes[3] == 1;
	NowData.JoystickButton = Bytes[4] == 1;
	NowData.TrackpadTouch = Bytes[5] == 1;

	NowData.Trigger   = ExtractFloatValue(Bytes, 11);
	NowData.GripValue = ExtractFloatValue(Bytes, 15);
	NowData.GripForce = ExtractFloatValue(Bytes, 19);
	NowData.JoystickX = ExtractFloatValue(Bytes, 23);
	NowData.JoystickY = ExtractFloatValue(Bytes, 27);

	NowData.bIsValid = true;
	return NowData;
}

float UContactGlovePluginBPLibrary::GetFingerRotationAmplitude(const FFlexData& FlexData,
	const EFingerSection& FingerSection)
{
	switch(FingerSection)
	{
	case EFingerSection::LittleProximal:
		return FlexData.Little.Proximal;
	case EFingerSection::LittleIntermediate:
		return FlexData.Little.Intermediate;
	case EFingerSection::LittleDistal:
		return FlexData.Little.Distal;
	case EFingerSection::RingProximal:
		return FlexData.Ring.Proximal;
	case EFingerSection::RingIntermediate:
		return FlexData.Ring.Intermediate;
	case EFingerSection::RingDistal:
		return FlexData.Ring.Distal;
	case EFingerSection::MiddleProximal:
		return FlexData.Middle.Proximal;
	case EFingerSection::MiddleIntermediate:
		return FlexData.Middle.Intermediate;
	case EFingerSection::MiddleDistal:
		return FlexData.Middle.Distal;
	case EFingerSection::IndexProximal:
		return FlexData.Index.Proximal;
	case EFingerSection::IndexIntermediate:
		return FlexData.Index.Intermediate;
	case EFingerSection::IndexDistal:
		return FlexData.Index.Distal;
	case EFingerSection::ThumbMetacarpal:
		return FlexData.Thumb.Metacarpal;
	case EFingerSection::ThumbProximal:
		return FlexData.Thumb.Proximal;
	case EFingerSection::ThumbDistal:
		return FlexData.Thumb.Distal;
	case EFingerSection::ThumbSplay:
		return FlexData.Thumb.Splay;
	default:
		return 0.0f;
	}
}

float UContactGlovePluginBPLibrary::GetMaximumDegree(const EFingerSection& FingerSection)
{
	switch (FingerSection)
	{
	case EFingerSection::ThumbMetacarpal:
		return 55.0f;
	case EFingerSection::ThumbProximal:
		return 30.0f;
	case EFingerSection::ThumbDistal:
		return 80.0f;
	case EFingerSection::IndexDistal:
	case EFingerSection::LittleDistal:
	case EFingerSection::MiddleDistal:
	case EFingerSection::RingDistal:
		return 90.0f;
	case EFingerSection::IndexIntermediate:
	case EFingerSection::MiddleIntermediate:
	case EFingerSection::RingIntermediate:
	case EFingerSection::LittleIntermediate:
		return 100.0f;
	case EFingerSection::IndexProximal:
	case EFingerSection::MiddleProximal:
	case EFingerSection::RingProximal:
	case EFingerSection::LittleProximal:
		return 90.0f;
	case EFingerSection::ThumbSplay:
		return 0.0f;
	default:
		return 0.0f;
	}
}

float UContactGlovePluginBPLibrary::GetFingerRotationDegree(const FFlexData& FlexData,
	const EFingerSection& FingerSection)
{
	return GetFingerRotationAmplitude(FlexData, FingerSection) * GetMaximumDegree(FingerSection);
}

void UContactGlovePluginBPLibrary::SetColliderLocation(const USkeletalMeshComponent* HandComponent,
	USceneComponent* ColliderComponent, const FName BoneName, const FVector Offset)
{
	const FTransform& Transform = HandComponent->GetSocketTransform(BoneName);
	const FVector WorldLocation = Transform.GetLocation();;
	const FVector OffsetLocation = UKismetMathLibrary::TransformDirection(Transform, Offset);
	ColliderComponent->SetWorldLocation(WorldLocation + OffsetLocation);
}
