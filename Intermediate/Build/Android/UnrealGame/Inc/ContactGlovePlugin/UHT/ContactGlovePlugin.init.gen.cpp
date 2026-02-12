// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContactGlovePlugin_init() {}
	CONTACTGLOVEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ContactGlovePlugin_ControllerDataSignature__DelegateSignature();
	CONTACTGLOVEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ContactGlovePlugin_ControllerInputSignature__DelegateSignature();
	CONTACTGLOVEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_ContactGlovePlugin_FlexDataSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ContactGlovePlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ContactGlovePlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_ContactGlovePlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ContactGlovePlugin_ControllerDataSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ContactGlovePlugin_ControllerInputSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ContactGlovePlugin_FlexDataSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ContactGlovePlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5DFD0279,
				0x6E7662F4,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ContactGlovePlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ContactGlovePlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ContactGlovePlugin(Z_Construct_UPackage__Script_ContactGlovePlugin, TEXT("/Script/ContactGlovePlugin"), Z_Registration_Info_UPackage__Script_ContactGlovePlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5DFD0279, 0x6E7662F4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
