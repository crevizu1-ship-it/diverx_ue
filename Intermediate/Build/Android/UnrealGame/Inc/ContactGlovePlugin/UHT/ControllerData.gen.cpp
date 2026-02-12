// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContactGlovePlugin/Public/ControllerData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControllerData() {}
// Cross Module References
	CONTACTGLOVEPLUGIN_API UEnum* Z_Construct_UEnum_ContactGlovePlugin_EHandSides();
	CONTACTGLOVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FControllerData();
	UPackage* Z_Construct_UPackage__Script_ContactGlovePlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControllerData;
class UScriptStruct* FControllerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControllerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControllerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControllerData, Z_Construct_UPackage__Script_ContactGlovePlugin(), TEXT("ControllerData"));
	}
	return Z_Registration_Info_UScriptStruct_ControllerData.OuterSingleton;
}
template<> CONTACTGLOVEPLUGIN_API UScriptStruct* StaticStruct<FControllerData>()
{
	return FControllerData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControllerData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static void NewProp_A_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static void NewProp_B_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Home_MetaData[];
#endif
		static void NewProp_Home_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Home;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JoystickButton_MetaData[];
#endif
		static void NewProp_JoystickButton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JoystickButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackpadTouch_MetaData[];
#endif
		static void NewProp_TrackpadTouch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TrackpadTouch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JoystickX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JoystickX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JoystickY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JoystickY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Trigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GripValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GripForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControllerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ControllerData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControllerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControllerData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_Hand_MetaData[] = {
		{ "Category", "ContactGlovePlugnig" },
		{ "ModuleRelativePath", "Public/ControllerData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControllerData, Hand), Z_Construct_UEnum_ContactGlovePlugin_EHandSides, METADATA_PARAMS(Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_Hand_MetaData)) }; // 3300301671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_A_MetaData[] = {
		{ "Category", "ControllerInput Struct" },
		{ "ModuleRelativePath", "Public/ControllerData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_A_SetBit(void* Obj)
	{
		((FControllerData*)Obj)->A = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FControllerData), &Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_A_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_B_MetaData[] = {
		{ "Category", "ControllerInput Struct" },
		{ "ModuleRelativePath", "Public/ControllerData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_B_SetBit(void* Obj)
	{
		((FControllerData*)Obj)->B = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FControllerData), &Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_B_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_Home_MetaData[] = {
		{ "Category", "ControllerInput Struct" },
		{ "ModuleRelativePath", "Public/ControllerData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_Home_SetBit(void* Obj)
	{
		((FControllerData*)Obj)->Home = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_Home = { "Home", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FControllerData), &Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_Home_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_Home_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_Home_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_JoystickButton_MetaData[] = {
		{ "Category", "ControllerInput Struct" },
		{ "ModuleRelativePath", "Public/ControllerData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_JoystickButton_SetBit(void* Obj)
	{
		((FControllerData*)Obj)->JoystickButton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_JoystickButton = { "JoystickButton", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FControllerData), &Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_JoystickButton_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_JoystickButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_JoystickButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_TrackpadTouch_MetaData[] = {
		{ "Category", "ControllerInput Struct" },
		{ "ModuleRelativePath", "Public/ControllerData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_TrackpadTouch_SetBit(void* Obj)
	{
		((FControllerData*)Obj)->TrackpadTouch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_TrackpadTouch = { "TrackpadTouch", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FControllerData), &Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_TrackpadTouch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_TrackpadTouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_TrackpadTouch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_JoystickX_MetaData[] = {
		{ "Category", "ControllerInput Struct" },
		{ "ModuleRelativePath", "Public/ControllerData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_JoystickX = { "JoystickX", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControllerData, JoystickX), METADATA_PARAMS(Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_JoystickX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_JoystickX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_JoystickY_MetaData[] = {
		{ "Category", "ControllerInput Struct" },
		{ "ModuleRelativePath", "Public/ControllerData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_JoystickY = { "JoystickY", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControllerData, JoystickY), METADATA_PARAMS(Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_JoystickY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_JoystickY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_Trigger_MetaData[] = {
		{ "Category", "ControllerInput Struct" },
		{ "ModuleRelativePath", "Public/ControllerData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControllerData, Trigger), METADATA_PARAMS(Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_Trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_Trigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_GripValue_MetaData[] = {
		{ "Category", "ControllerInput Struct" },
		{ "ModuleRelativePath", "Public/ControllerData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_GripValue = { "GripValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControllerData, GripValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_GripValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_GripValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_GripForce_MetaData[] = {
		{ "Category", "ControllerInput Struct" },
		{ "ModuleRelativePath", "Public/ControllerData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_GripForce = { "GripForce", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControllerData, GripForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_GripForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_GripForce_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControllerData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_Hand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_Home,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_JoystickButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_TrackpadTouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_JoystickX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_JoystickY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_Trigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_GripValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_GripForce,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControllerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContactGlovePlugin,
		nullptr,
		&NewStructOps,
		"ControllerData",
		sizeof(FControllerData),
		alignof(FControllerData),
		Z_Construct_UScriptStruct_FControllerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControllerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControllerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControllerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControllerData()
	{
		if (!Z_Registration_Info_UScriptStruct_ControllerData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControllerData.InnerSingleton, Z_Construct_UScriptStruct_FControllerData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControllerData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ControllerData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ControllerData_h_Statics::ScriptStructInfo[] = {
		{ FControllerData::StaticStruct, Z_Construct_UScriptStruct_FControllerData_Statics::NewStructOps, TEXT("ControllerData"), &Z_Registration_Info_UScriptStruct_ControllerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControllerData), 1116836930U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ControllerData_h_3920680806(TEXT("/Script/ContactGlovePlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ControllerData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ControllerData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
