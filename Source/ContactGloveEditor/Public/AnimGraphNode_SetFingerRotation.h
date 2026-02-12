#pragma once

#include "AnimGraphDefinitions.h"
#if ENGINE_MAJOR_VERSION >= 5
#include "Editor/AnimGraph/Public/AnimGraphNode_SkeletalControlBase.h"
#else
#include "Editor/AnimGraph/Classes/AnimGraphNode_SkeletalControlBase.h"
#endif
#include "AnimNode_SetFingerRotation.h"
#include "Kismet2/BlueprintEditorUtils.h"

#include "AnimGraphNode_SetFingerRotation.generated.h"

UCLASS(MinimalAPI)
class UAnimGraphNode_SetFingerRotation : public UAnimGraphNode_Base
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(EditAnywhere, Category = Settings)
	FAnimNode_SetFingerRotation Node;

public:
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FLinearColor GetNodeTitleColor() const override;
	virtual FString GetNodeCategory() const override;
	virtual FText GetTooltipText() const override;

protected:
	virtual FText GetControllerDescription() const;
};