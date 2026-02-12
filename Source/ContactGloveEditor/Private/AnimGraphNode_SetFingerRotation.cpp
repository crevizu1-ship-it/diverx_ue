
#include "AnimGraphNode_SetFingerRotation.h"

UAnimGraphNode_SetFingerRotation::UAnimGraphNode_SetFingerRotation(const FObjectInitializer& Initializer)
	: Super(Initializer)
{
}

FLinearColor UAnimGraphNode_SetFingerRotation::GetNodeTitleColor() const
{
	return FLinearColor(1.f, 1.f, 0.f, 1.f);
}

FString UAnimGraphNode_SetFingerRotation::GetNodeCategory() const
{
	return FString("Finger Animation (ContactGlove)");
}

FText UAnimGraphNode_SetFingerRotation::GetControllerDescription() const
{
	return FText::FromString("Set Finger Rotation");
}

FText UAnimGraphNode_SetFingerRotation::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	FText Description = GetControllerDescription();
	return Description;
}

FText UAnimGraphNode_SetFingerRotation::GetTooltipText() const
{
	return FText::FromString(TEXT("Animates finger rotation with ContactGlove Flex Data."));
}