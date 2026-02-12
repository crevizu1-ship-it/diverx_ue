// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNode_SetFingerRotation.h"

#if WITH_EDITOR
#include "BlueprintEditor.h"
#endif
#include "ContactGlovePlugin.h"
#include "ContactGlovePluginBPLibrary.h"
#include "Hand.h"
#include "OscActor.h"

#define LOCTEXT_NAMESPACE "SetFlexRotation"

FAnimNode_SetFingerRotation::FAnimNode_SetFingerRotation()
{
	for(int i = 0;i < static_cast<int>(EFingerSection::Num); i++)
	{
		EFingerSection FingerSection = static_cast<EFingerSection>(i);
		
		FBoneReference Tmp = {};
		BoneMap.Emplace(FingerSection, Tmp);

		// MaximumRotation.Add(FingerSection, UContactGlovePluginBPLibrary::GetMaximumDegree(FingerSection));

		MaximumRotation.Emplace(FingerSection,
			FRotator(0.f, -UContactGlovePluginBPLibrary::GetMaximumDegree(FingerSection), 0.f));
	}
}

void FAnimNode_SetFingerRotation::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	FAnimNode_Base::Initialize_AnyThread(Context);

	for(int i= 0;i < static_cast<int>(EFingerSection::Num); i++)
	{
		ModifyBoneNodes.Emplace(FAnimNode_ModifyBone());

		const EFingerSection FingerSection = static_cast<EFingerSection>(i);
		const FBoneReference *Reference = BoneMap.Find(FingerSection);
		if(Reference)
		{
			ModifyBoneNodes[i].BoneToModify.BoneName = Reference->BoneName;
		}
		ModifyBoneNodes[i].BoneToModify.Initialize(Context.AnimInstanceProxy->GetSkeleton());
	}

	ComponentToLocalNode.ComponentPose.SetLinkNode(&ModifyBoneNodes[0]);
	
	for(int i = 0; i < static_cast<int>(EFingerSection::Num) - 1; i++)
	{
		ModifyBoneNodes[i].ComponentPose.SetLinkNode(&ModifyBoneNodes[i+1]);
	}
	ModifyBoneNodes.Last().ComponentPose.SetLinkNode(&LocalToComponentNode);

	LocalToComponentNode.LocalPose = SourcePose;

	ComponentToLocalNode.Initialize_AnyThread(Context);
}

void FAnimNode_SetFingerRotation::Update_AnyThread(const FAnimationUpdateContext& Context)
{
	// if (!IsInGameThread())
	// {
	// 	// UE_LOG(LogTemp, Warning, TEXT("FAnimNode_SetFingerRotation::Update_AnyThread called outside of the game thread."));
	// 	return;
	// }
	
	GetEvaluateGraphExposedInputs().Execute(Context);
	
	// const TSharedPtr<FContactGloveInputDevice> InputDevice = FContactGlovePluginModule::Get().GetInputDevice();

	if(const USkeletalMeshComponent* SkeletalMeshComp = Context.AnimInstanceProxy->GetSkelMeshComponent())
	{
		// SkeletalMeshComponentからUWorldを取得
		if(UWorld* World = SkeletalMeshComp->GetWorld())
		{
			if (const AOscActor* InputDevice = AOscActor::GetInstance(World))
			{
				for(int i = 0;i < static_cast<int>(EFingerSection::Num); i++)
				{
					const EFingerSection FingerSection = static_cast<EFingerSection>(i);
			       
					float Amplitude = 0.0f;
					if(bUseOriginalFlex && InputDevice)
					{
						Amplitude = UContactGlovePluginBPLibrary::GetFingerRotationAmplitude(
							InputDevice->GetFlexData(Hand), FingerSection);
					}
					else
					{
						Amplitude = UContactGlovePluginBPLibrary::GetFingerRotationAmplitude(
							FlexData, FingerSection);
					}
					ModifyBoneNodes[i].Rotation = Amplitude * MaximumRotation[FingerSection];
					ModifyBoneNodes[i].RotationMode = EBoneModificationMode::BMM_Replace;
					ModifyBoneNodes[i].RotationSpace = EBoneControlSpace::BCS_ParentBoneSpace;
				}
			}
		}
	}

	ComponentToLocalNode.Update_AnyThread(Context);
}

void FAnimNode_SetFingerRotation::CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)
{
	ComponentToLocalNode.CacheBones_AnyThread(Context);
}

void FAnimNode_SetFingerRotation::Evaluate_AnyThread(FPoseContext& Output)
{
	ComponentToLocalNode.Evaluate_AnyThread(Output);
}

#undef LOCTEXT_NAMESPACE