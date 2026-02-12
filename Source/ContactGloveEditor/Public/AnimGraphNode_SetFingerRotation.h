#pragma once

#include "CoreMinimal.h"
#include "AnimGraphNode_Base.h"
#include "AnimNode_SetFingerRotation.h"

#include "AnimGraphNode_SetFingerRotation.generated.h"

UCLASS(MinimalAPI)
class UAnimGraphNode_SetFingerRotation : public UAnimGraphNode_Base
{
	GENERATED_BODY()

public:
	UAnimGraphNode_SetFingerRotation(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditAnywhere, Category = Settings)
	FAnimNode_SetFingerRotation Node;

	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FLinearColor GetNodeTitleColor() const override;
	virtual FString GetNodeCategory() const override;
	virtual FText GetTooltipText() const override;

protected:
	virtual FText GetControllerDescription() const;
};
