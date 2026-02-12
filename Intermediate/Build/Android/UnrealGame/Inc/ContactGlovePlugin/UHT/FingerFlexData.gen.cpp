// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContactGlovePlugin/Public/FingerFlexData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFingerFlexData() {}
// Cross Module References
	CONTACTGLOVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFingerFlexData();
	UPackage* Z_Construct_UPackage__Script_ContactGlovePlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FingerFlexData;
class UScriptStruct* FFingerFlexData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FingerFlexData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FingerFlexData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFingerFlexData, Z_Construct_UPackage__Script_ContactGlovePlugin(), TEXT("FingerFlexData"));
	}
	return Z_Registration_Info_UScriptStruct_FingerFlexData.OuterSingleton;
}
template<> CONTACTGLOVEPLUGIN_API UScriptStruct* StaticStruct<FFingerFlexData>()
{
	return FFingerFlexData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFingerFlexData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Proximal_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Proximal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intermediate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intermediate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distal_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFingerFlexData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FingerFlexData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFingerFlexData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFingerFlexData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFingerFlexData_Statics::NewProp_Proximal_MetaData[] = {
		{ "Category", "FingerFlexData Struct" },
		{ "ModuleRelativePath", "Public/FingerFlexData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFingerFlexData_Statics::NewProp_Proximal = { "Proximal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFingerFlexData, Proximal), METADATA_PARAMS(Z_Construct_UScriptStruct_FFingerFlexData_Statics::NewProp_Proximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFingerFlexData_Statics::NewProp_Proximal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFingerFlexData_Statics::NewProp_Intermediate_MetaData[] = {
		{ "Category", "FingerFlexData Struct" },
		{ "ModuleRelativePath", "Public/FingerFlexData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFingerFlexData_Statics::NewProp_Intermediate = { "Intermediate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFingerFlexData, Intermediate), METADATA_PARAMS(Z_Construct_UScriptStruct_FFingerFlexData_Statics::NewProp_Intermediate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFingerFlexData_Statics::NewProp_Intermediate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFingerFlexData_Statics::NewProp_Distal_MetaData[] = {
		{ "Category", "FingerFlexData Struct" },
		{ "ModuleRelativePath", "Public/FingerFlexData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFingerFlexData_Statics::NewProp_Distal = { "Distal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFingerFlexData, Distal), METADATA_PARAMS(Z_Construct_UScriptStruct_FFingerFlexData_Statics::NewProp_Distal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFingerFlexData_Statics::NewProp_Distal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFingerFlexData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFingerFlexData_Statics::NewProp_Proximal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFingerFlexData_Statics::NewProp_Intermediate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFingerFlexData_Statics::NewProp_Distal,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFingerFlexData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContactGlovePlugin,
		nullptr,
		&NewStructOps,
		"FingerFlexData",
		sizeof(FFingerFlexData),
		alignof(FFingerFlexData),
		Z_Construct_UScriptStruct_FFingerFlexData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFingerFlexData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFingerFlexData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFingerFlexData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFingerFlexData()
	{
		if (!Z_Registration_Info_UScriptStruct_FingerFlexData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FingerFlexData.InnerSingleton, Z_Construct_UScriptStruct_FFingerFlexData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FingerFlexData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_FingerFlexData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_FingerFlexData_h_Statics::ScriptStructInfo[] = {
		{ FFingerFlexData::StaticStruct, Z_Construct_UScriptStruct_FFingerFlexData_Statics::NewStructOps, TEXT("FingerFlexData"), &Z_Registration_Info_UScriptStruct_FingerFlexData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFingerFlexData), 3216836175U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_FingerFlexData_h_256948211(TEXT("/Script/ContactGlovePlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_FingerFlexData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_FingerFlexData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
