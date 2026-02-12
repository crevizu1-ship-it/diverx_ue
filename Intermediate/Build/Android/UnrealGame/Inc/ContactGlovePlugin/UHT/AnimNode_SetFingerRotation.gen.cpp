// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContactGlovePlugin/Public/AnimNode_SetFingerRotation.h"
#include "ContactGlovePlugin/Public/FlexData.h"
#include "Engine/Classes/Animation/AnimNodeBase.h"
#include "Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SetFingerRotation() {}
// Cross Module References
	CONTACTGLOVEPLUGIN_API UEnum* Z_Construct_UEnum_ContactGlovePlugin_EFingerSection();
	CONTACTGLOVEPLUGIN_API UEnum* Z_Construct_UEnum_ContactGlovePlugin_EHandSides();
	CONTACTGLOVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation();
	CONTACTGLOVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFlexData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_ContactGlovePlugin();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_SetFingerRotation>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_SetFingerRotation cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_SetFingerRotation;
class UScriptStruct* FAnimNode_SetFingerRotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SetFingerRotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_SetFingerRotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation, Z_Construct_UPackage__Script_ContactGlovePlugin(), TEXT("AnimNode_SetFingerRotation"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SetFingerRotation.OuterSingleton;
}
template<> CONTACTGLOVEPLUGIN_API UScriptStruct* StaticStruct<FAnimNode_SetFingerRotation>()
{
	return FAnimNode_SetFingerRotation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlexData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FlexData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseOriginalFlex_MetaData[];
#endif
		static void NewProp_bUseOriginalFlex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOriginalFlex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoneMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BoneMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaximumRotation_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaximumRotation_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaximumRotation_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumRotation_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MaximumRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_SetFingerRotation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SetFingerRotation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNode_SetFingerRotation.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SetFingerRotation, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_SourcePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_SourcePose_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_FlexData_MetaData[] = {
		{ "Category", "FlexData" },
		{ "ModuleRelativePath", "Public/AnimNode_SetFingerRotation.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_FlexData = { "FlexData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SetFingerRotation, FlexData), Z_Construct_UScriptStruct_FFlexData, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_FlexData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_FlexData_MetaData)) }; // 102164489
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_Hand_MetaData[] = {
		{ "Category", "FlexData" },
		{ "ModuleRelativePath", "Public/AnimNode_SetFingerRotation.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SetFingerRotation, Hand), Z_Construct_UEnum_ContactGlovePlugin_EHandSides, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_Hand_MetaData)) }; // 3300301671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_bUseOriginalFlex_MetaData[] = {
		{ "Category", "FlexData" },
		{ "ModuleRelativePath", "Public/AnimNode_SetFingerRotation.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_bUseOriginalFlex_SetBit(void* Obj)
	{
		((FAnimNode_SetFingerRotation*)Obj)->bUseOriginalFlex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_bUseOriginalFlex = { "bUseOriginalFlex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_SetFingerRotation), &Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_bUseOriginalFlex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_bUseOriginalFlex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_bUseOriginalFlex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_BoneMap_ValueProp = { "BoneMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) }; // 2906976723
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_BoneMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_BoneMap_Key_KeyProp = { "BoneMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_ContactGlovePlugin_EFingerSection, METADATA_PARAMS(nullptr, 0) }; // 3718121088
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_BoneMap_MetaData[] = {
		{ "Category", "BoneMap" },
		{ "ModuleRelativePath", "Public/AnimNode_SetFingerRotation.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_BoneMap = { "BoneMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SetFingerRotation, BoneMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_BoneMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_BoneMap_MetaData)) }; // 3718121088 2906976723
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_MaximumRotation_ValueProp = { "MaximumRotation", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_MaximumRotation_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_MaximumRotation_Key_KeyProp = { "MaximumRotation_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_ContactGlovePlugin_EFingerSection, METADATA_PARAMS(nullptr, 0) }; // 3718121088
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_MaximumRotation_MetaData[] = {
		{ "Category", "MaximumRotation" },
		{ "ModuleRelativePath", "Public/AnimNode_SetFingerRotation.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_MaximumRotation = { "MaximumRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SetFingerRotation, MaximumRotation), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_MaximumRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_MaximumRotation_MetaData)) }; // 3718121088
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_SourcePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_FlexData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_Hand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_bUseOriginalFlex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_BoneMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_BoneMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_BoneMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_BoneMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_MaximumRotation_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_MaximumRotation_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_MaximumRotation_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewProp_MaximumRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContactGlovePlugin,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_SetFingerRotation",
		sizeof(FAnimNode_SetFingerRotation),
		alignof(FAnimNode_SetFingerRotation),
		Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_SetFingerRotation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_SetFingerRotation.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_SetFingerRotation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_AnimNode_SetFingerRotation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_AnimNode_SetFingerRotation_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_SetFingerRotation::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation_Statics::NewStructOps, TEXT("AnimNode_SetFingerRotation"), &Z_Registration_Info_UScriptStruct_AnimNode_SetFingerRotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_SetFingerRotation), 945480327U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_AnimNode_SetFingerRotation_h_4290327786(TEXT("/Script/ContactGlovePlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_AnimNode_SetFingerRotation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_AnimNode_SetFingerRotation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
