// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ControllerData.h"
#include "Animation/AnimationTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ContactGlovePluginBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class UContactGlovePluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, Category = "ContactGlove Functions")
	static float BytesToFloatLittleEndian(uint8 Byte1, uint8 Byte2, uint8 Byte3, uint8 Byte4);
	
	UFUNCTION(BlueprintCallable, Category = "ContactGlove Functions")
	static float ExtractFloatValue(const TArray<uint8>& Bytes, int StartIndex);
	
	UFUNCTION(BlueprintCallable, Category = "ContactGlove Functions")
	static FFlexData ExtractFlexData(const TArray<uint8>& Bytes);

	UFUNCTION(BlueprintCallable, Category = "ContactGlove Functions")
	static FControllerData ExtractControllerData(const TArray<uint8>& Bytes);

	UFUNCTION(BlueprintCallable, Category = "ContactGlove Functions")
	static float GetFingerRotationAmplitude(const FFlexData& FlexData, const EFingerSection& FingerSection);

	UFUNCTION(BlueprintCallable, Category = "ContactGlove Functions")
	static float GetMaximumDegree(const EFingerSection& FingerSection);

	UFUNCTION(BlueprintCallable, Category = "ContactGlove Functions")
	static float GetFingerRotationDegree(const FFlexData& FlexData, const EFingerSection& FingerSection);

	UFUNCTION(BlueprintCallable, meta=(AdvancedDisplay = "3"), Category = "ContactGlove Functions")
	static void SetColliderLocation(const USkeletalMeshComponent *HandComponent,
		USceneComponent *ColliderComponent, const FName BoneName, const FVector Offset = FVector::ZeroVector);

};
