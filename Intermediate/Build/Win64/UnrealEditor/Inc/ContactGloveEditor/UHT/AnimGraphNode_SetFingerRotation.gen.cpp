// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContactGloveEditor/Public/AnimGraphNode_SetFingerRotation.h"
#include "ContactGlovePlugin/Public/AnimNode_SetFingerRotation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_SetFingerRotation() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	CONTACTGLOVEEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_SetFingerRotation();
	CONTACTGLOVEEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_SetFingerRotation_NoRegister();
	CONTACTGLOVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation();
	UPackage* Z_Construct_UPackage__Script_ContactGloveEditor();
// End Cross Module References
	void UAnimGraphNode_SetFingerRotation::StaticRegisterNativesUAnimGraphNode_SetFingerRotation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_SetFingerRotation);
	UClass* Z_Construct_UClass_UAnimGraphNode_SetFingerRotation_NoRegister()
	{
		return UAnimGraphNode_SetFingerRotation::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_SetFingerRotation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_SetFingerRotation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_ContactGloveEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_SetFingerRotation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_SetFingerRotation.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_SetFingerRotation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_SetFingerRotation_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_SetFingerRotation.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_SetFingerRotation_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_SetFingerRotation, Node), Z_Construct_UScriptStruct_FAnimNode_SetFingerRotation, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_SetFingerRotation_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_SetFingerRotation_Statics::NewProp_Node_MetaData)) }; // 945480327
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_SetFingerRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_SetFingerRotation_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_SetFingerRotation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_SetFingerRotation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_SetFingerRotation_Statics::ClassParams = {
		&UAnimGraphNode_SetFingerRotation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_SetFingerRotation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_SetFingerRotation_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_SetFingerRotation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_SetFingerRotation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_SetFingerRotation()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_SetFingerRotation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_SetFingerRotation.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_SetFingerRotation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_SetFingerRotation.OuterSingleton;
	}
	template<> CONTACTGLOVEEDITOR_API UClass* StaticClass<UAnimGraphNode_SetFingerRotation>()
	{
		return UAnimGraphNode_SetFingerRotation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_SetFingerRotation);
	UAnimGraphNode_SetFingerRotation::~UAnimGraphNode_SetFingerRotation() {}
	struct Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGloveEditor_Public_AnimGraphNode_SetFingerRotation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGloveEditor_Public_AnimGraphNode_SetFingerRotation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_SetFingerRotation, UAnimGraphNode_SetFingerRotation::StaticClass, TEXT("UAnimGraphNode_SetFingerRotation"), &Z_Registration_Info_UClass_UAnimGraphNode_SetFingerRotation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_SetFingerRotation), 3323237691U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGloveEditor_Public_AnimGraphNode_SetFingerRotation_h_3286155261(TEXT("/Script/ContactGloveEditor"),
		Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGloveEditor_Public_AnimGraphNode_SetFingerRotation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGloveEditor_Public_AnimGraphNode_SetFingerRotation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
