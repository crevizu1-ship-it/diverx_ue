// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContactGlovePlugin/Public/HapticsContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHapticsContext() {}
// Cross Module References
	CONTACTGLOVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FEachHapticsContext();
	CONTACTGLOVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHapticsContext();
	UPackage* Z_Construct_UPackage__Script_ContactGlovePlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EachHapticsContext;
class UScriptStruct* FEachHapticsContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EachHapticsContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EachHapticsContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEachHapticsContext, Z_Construct_UPackage__Script_ContactGlovePlugin(), TEXT("EachHapticsContext"));
	}
	return Z_Registration_Info_UScriptStruct_EachHapticsContext.OuterSingleton;
}
template<> CONTACTGLOVEPLUGIN_API UScriptStruct* StaticStruct<FEachHapticsContext>()
{
	return FEachHapticsContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEachHapticsContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEachHapticsContext_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HapticsContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEachHapticsContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEachHapticsContext>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEachHapticsContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContactGlovePlugin,
		nullptr,
		&NewStructOps,
		"EachHapticsContext",
		sizeof(FEachHapticsContext),
		alignof(FEachHapticsContext),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEachHapticsContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEachHapticsContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEachHapticsContext()
	{
		if (!Z_Registration_Info_UScriptStruct_EachHapticsContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EachHapticsContext.InnerSingleton, Z_Construct_UScriptStruct_FEachHapticsContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EachHapticsContext.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HapticsContext;
class UScriptStruct* FHapticsContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HapticsContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HapticsContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHapticsContext, Z_Construct_UPackage__Script_ContactGlovePlugin(), TEXT("HapticsContext"));
	}
	return Z_Registration_Info_UScriptStruct_HapticsContext.OuterSingleton;
}
template<> CONTACTGLOVEPLUGIN_API UScriptStruct* StaticStruct<FHapticsContext>()
{
	return FHapticsContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHapticsContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHapticsContext_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HapticsContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHapticsContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHapticsContext>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHapticsContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContactGlovePlugin,
		nullptr,
		&NewStructOps,
		"HapticsContext",
		sizeof(FHapticsContext),
		alignof(FHapticsContext),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHapticsContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHapticsContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHapticsContext()
	{
		if (!Z_Registration_Info_UScriptStruct_HapticsContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HapticsContext.InnerSingleton, Z_Construct_UScriptStruct_FHapticsContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HapticsContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_HapticsContext_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_HapticsContext_h_Statics::ScriptStructInfo[] = {
		{ FEachHapticsContext::StaticStruct, Z_Construct_UScriptStruct_FEachHapticsContext_Statics::NewStructOps, TEXT("EachHapticsContext"), &Z_Registration_Info_UScriptStruct_EachHapticsContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEachHapticsContext), 3546260281U) },
		{ FHapticsContext::StaticStruct, Z_Construct_UScriptStruct_FHapticsContext_Statics::NewStructOps, TEXT("HapticsContext"), &Z_Registration_Info_UScriptStruct_HapticsContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHapticsContext), 3861084271U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_HapticsContext_h_549352927(TEXT("/Script/ContactGlovePlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_HapticsContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_HapticsContext_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
