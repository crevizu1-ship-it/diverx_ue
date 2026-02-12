#include "AnimGraphNode_SetFingerRotation.h"

UAnimGraphNode_SetFingerRotation::UAnimGraphNode_SetFingerRotation(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FLinearColor UAnimGraphNode_SetFingerRotation::GetNodeTitleColor() const
{
	return FLinearColor(1.f, 1.f, 0.f, 1.f);
}

FString UAnimGraphNode_SetFingerRotation::GetNodeCategory() const
{
	return FString(TEXT("Finger Animation (ContactGlove)"));
}

FText UAnimGraphNode_SetFingerRotation::GetControllerDescription() const
{
	return FText::FromString(TEXT("Set Finger Rotation"));
}

FText UAnimGraphNode_SetFingerRotation::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return GetControllerDescription();
}

FText UAnimGraphNode_SetFingerRotation::GetTooltipText() const
{
	return FText::FromString(TEXT("Animates finger rotation with ContactGlove Flex Data."));
}
