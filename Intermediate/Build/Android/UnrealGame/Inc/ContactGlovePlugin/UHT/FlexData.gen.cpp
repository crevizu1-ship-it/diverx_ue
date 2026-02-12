// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContactGlovePlugin/Public/FlexData.h"
#include "ContactGlovePlugin/Public/FingerFlexData.h"
#include "ContactGlovePlugin/Public/ThumbFlexData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlexData() {}
// Cross Module References
	CONTACTGLOVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFingerFlexData();
	CONTACTGLOVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFlexData();
	CONTACTGLOVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FThumbFlexData();
	UPackage* Z_Construct_UPackage__Script_ContactGlovePlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlexData;
class UScriptStruct* FFlexData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlexData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlexData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlexData, Z_Construct_UPackage__Script_ContactGlovePlugin(), TEXT("FlexData"));
	}
	return Z_Registration_Info_UScriptStruct_FlexData.OuterSingleton;
}
template<> CONTACTGLOVEPLUGIN_API UScriptStruct* StaticStruct<FFlexData>()
{
	return FFlexData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFlexData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Little_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Little;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ring_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ring;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Middle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Middle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thumb_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Thumb;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlexData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FlexData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFlexData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlexData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Little_MetaData[] = {
		{ "Category", "FlexData Struct" },
		{ "ModuleRelativePath", "Public/FlexData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Little = { "Little", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFlexData, Little), Z_Construct_UScriptStruct_FFingerFlexData, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Little_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Little_MetaData)) }; // 3216836175
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Ring_MetaData[] = {
		{ "Category", "FlexData Struct" },
		{ "ModuleRelativePath", "Public/FlexData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Ring = { "Ring", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFlexData, Ring), Z_Construct_UScriptStruct_FFingerFlexData, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Ring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Ring_MetaData)) }; // 3216836175
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Middle_MetaData[] = {
		{ "Category", "FlexData Struct" },
		{ "ModuleRelativePath", "Public/FlexData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Middle = { "Middle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFlexData, Middle), Z_Construct_UScriptStruct_FFingerFlexData, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Middle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Middle_MetaData)) }; // 3216836175
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "FlexData Struct" },
		{ "ModuleRelativePath", "Public/FlexData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFlexData, Index), Z_Construct_UScriptStruct_FFingerFlexData, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Index_MetaData)) }; // 3216836175
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Thumb_MetaData[] = {
		{ "Category", "FlexData Struct" },
		{ "ModuleRelativePath", "Public/FlexData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Thumb = { "Thumb", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFlexData, Thumb), Z_Construct_UScriptStruct_FThumbFlexData, METADATA_PARAMS(Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Thumb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Thumb_MetaData)) }; // 2731644523
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlexData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Little,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Ring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Middle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlexData_Statics::NewProp_Thumb,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlexData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContactGlovePlugin,
		nullptr,
		&NewStructOps,
		"FlexData",
		sizeof(FFlexData),
		alignof(FFlexData),
		Z_Construct_UScriptStruct_FFlexData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlexData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFlexData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlexData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFlexData()
	{
		if (!Z_Registration_Info_UScriptStruct_FlexData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlexData.InnerSingleton, Z_Construct_UScriptStruct_FFlexData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FlexData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_FlexData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_FlexData_h_Statics::ScriptStructInfo[] = {
		{ FFlexData::StaticStruct, Z_Construct_UScriptStruct_FFlexData_Statics::NewStructOps, TEXT("FlexData"), &Z_Registration_Info_UScriptStruct_FlexData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlexData), 102164489U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_FlexData_h_4055496093(TEXT("/Script/ContactGlovePlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_FlexData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_FlexData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
