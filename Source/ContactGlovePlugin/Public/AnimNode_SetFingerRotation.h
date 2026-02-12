#pragma once

#include "FlexData.h"
#include "ContactGloveInputDevice.h"
#include "Hand.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeSpaceConversions.h"
#include "BoneControllers/AnimNode_ModifyBone.h"
#include "AnimNode_SetFingerRotation.generated.h"

USTRUCT(BlueprintInternalUseOnly)
struct CONTACTGLOVEPLUGIN_API FAnimNode_SetFingerRotation : public FAnimNode_Base
{
	GENERATED_USTRUCT_BODY()

	FAnimNode_SetFingerRotation();

public:
	UPROPERTY(EditAnywhere, Category = "Links")
	FPoseLink SourcePose;

	UPROPERTY(EditAnywhere, Category = "FlexData", meta = (PinShownByDefault))
	FFlexData FlexData;

	UPROPERTY(EditAnywhere, Category = "FlexData", meta = (PinShownByDefault))
	EHandSides Hand = EHandSides::Left;

	UPROPERTY(EditAnywhere, Category = "FlexData", meta = (PinShownByDefault))
	bool bUseOriginalFlex = true;

	UPROPERTY(EditAnywhere, Category = "BoneMap")
	TMap<EFingerSection, FBoneReference> BoneMap;
	
	UPROPERTY(EditAnywhere, Category = "MaximumRotation")
	TMap<EFingerSection, FRotator> MaximumRotation;

private:
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context) override;
	virtual void Update_AnyThread(const FAnimationUpdateContext& Context) override;
	virtual void Evaluate_AnyThread(FPoseContext& Output) override;
	
	FAnimNode_ConvertLocalToComponentSpace LocalToComponentNode;
	FAnimNode_ConvertComponentToLocalSpace ComponentToLocalNode;
	TArray<FAnimNode_ModifyBone> ModifyBoneNodes;
};
