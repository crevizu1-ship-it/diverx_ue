// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContactGlovePlugin/Public/OscActor.h"
#include "OSC/Public/OSCAddress.h"
#include "OSC/Public/OSCMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOscActor() {}
// Cross Module References
	CONTACTGLOVEPLUGIN_API UClass* Z_Construct_UClass_AOscActor();
	CONTACTGLOVEPLUGIN_API UClass* Z_Construct_UClass_AOscActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	OSC_API UClass* Z_Construct_UClass_UOSCServer_NoRegister();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOSCAddress();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOSCMessage();
	UPackage* Z_Construct_UPackage__Script_ContactGlovePlugin();
// End Cross Module References
	DEFINE_FUNCTION(AOscActor::execOnControllerInputReceived)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_AddressPattern);
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_PROPERTY(FStrProperty,Z_Param_IPAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnControllerInputReceived(Z_Param_Out_AddressPattern,Z_Param_Out_Message,Z_Param_IPAddress,Z_Param_Port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOscActor::execOnFingerRotRightReceived)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_AddressPattern);
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_PROPERTY(FStrProperty,Z_Param_IPAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFingerRotRightReceived(Z_Param_Out_AddressPattern,Z_Param_Out_Message,Z_Param_IPAddress,Z_Param_Port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AOscActor::execOnFingerRotLeftReceived)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_AddressPattern);
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_GET_PROPERTY(FStrProperty,Z_Param_IPAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFingerRotLeftReceived(Z_Param_Out_AddressPattern,Z_Param_Out_Message,Z_Param_IPAddress,Z_Param_Port);
		P_NATIVE_END;
	}
	void AOscActor::StaticRegisterNativesAOscActor()
	{
		UClass* Class = AOscActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnControllerInputReceived", &AOscActor::execOnControllerInputReceived },
			{ "OnFingerRotLeftReceived", &AOscActor::execOnFingerRotLeftReceived },
			{ "OnFingerRotRightReceived", &AOscActor::execOnFingerRotRightReceived },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics
	{
		struct OscActor_eventOnControllerInputReceived_Parms
		{
			FOSCAddress AddressPattern;
			FOSCMessage Message;
			FString IPAddress;
			int32 Port;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressPattern_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddressPattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IPAddress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::NewProp_AddressPattern_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::NewProp_AddressPattern = { "AddressPattern", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OscActor_eventOnControllerInputReceived_Parms, AddressPattern), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::NewProp_AddressPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::NewProp_AddressPattern_MetaData)) }; // 1476147242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OscActor_eventOnControllerInputReceived_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::NewProp_Message_MetaData)) }; // 3256038154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OscActor_eventOnControllerInputReceived_Parms, IPAddress), METADATA_PARAMS(Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::NewProp_IPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::NewProp_IPAddress_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OscActor_eventOnControllerInputReceived_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::NewProp_AddressPattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::NewProp_IPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::NewProp_Port,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OscActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOscActor, nullptr, "OnControllerInputReceived", nullptr, nullptr, sizeof(Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::OscActor_eventOnControllerInputReceived_Parms), Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOscActor_OnControllerInputReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOscActor_OnControllerInputReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics
	{
		struct OscActor_eventOnFingerRotLeftReceived_Parms
		{
			FOSCAddress AddressPattern;
			FOSCMessage Message;
			FString IPAddress;
			int32 Port;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressPattern_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddressPattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IPAddress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::NewProp_AddressPattern_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::NewProp_AddressPattern = { "AddressPattern", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OscActor_eventOnFingerRotLeftReceived_Parms, AddressPattern), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::NewProp_AddressPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::NewProp_AddressPattern_MetaData)) }; // 1476147242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OscActor_eventOnFingerRotLeftReceived_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::NewProp_Message_MetaData)) }; // 3256038154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OscActor_eventOnFingerRotLeftReceived_Parms, IPAddress), METADATA_PARAMS(Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::NewProp_IPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::NewProp_IPAddress_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OscActor_eventOnFingerRotLeftReceived_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::NewProp_AddressPattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::NewProp_IPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::NewProp_Port,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OscActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOscActor, nullptr, "OnFingerRotLeftReceived", nullptr, nullptr, sizeof(Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::OscActor_eventOnFingerRotLeftReceived_Parms), Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics
	{
		struct OscActor_eventOnFingerRotRightReceived_Parms
		{
			FOSCAddress AddressPattern;
			FOSCMessage Message;
			FString IPAddress;
			int32 Port;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressPattern_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddressPattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IPAddress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::NewProp_AddressPattern_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::NewProp_AddressPattern = { "AddressPattern", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OscActor_eventOnFingerRotRightReceived_Parms, AddressPattern), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::NewProp_AddressPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::NewProp_AddressPattern_MetaData)) }; // 1476147242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OscActor_eventOnFingerRotRightReceived_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::NewProp_Message_MetaData)) }; // 3256038154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OscActor_eventOnFingerRotRightReceived_Parms, IPAddress), METADATA_PARAMS(Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::NewProp_IPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::NewProp_IPAddress_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OscActor_eventOnFingerRotRightReceived_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::NewProp_AddressPattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::NewProp_IPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::NewProp_Port,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OscActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOscActor, nullptr, "OnFingerRotRightReceived", nullptr, nullptr, sizeof(Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::OscActor_eventOnFingerRotRightReceived_Parms), Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOscActor);
	UClass* Z_Construct_UClass_AOscActor_NoRegister()
	{
		return AOscActor::StaticClass();
	}
	struct Z_Construct_UClass_AOscActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Server_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Server;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOscActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ContactGlovePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOscActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOscActor_OnControllerInputReceived, "OnControllerInputReceived" }, // 2258543461
		{ &Z_Construct_UFunction_AOscActor_OnFingerRotLeftReceived, "OnFingerRotLeftReceived" }, // 1427903838
		{ &Z_Construct_UFunction_AOscActor_OnFingerRotRightReceived, "OnFingerRotRightReceived" }, // 18049952
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOscActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OscActor.h" },
		{ "ModuleRelativePath", "Public/OscActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOscActor_Statics::NewProp_Server_MetaData[] = {
		{ "ModuleRelativePath", "Public/OscActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOscActor_Statics::NewProp_Server = { "Server", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOscActor, Server), Z_Construct_UClass_UOSCServer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOscActor_Statics::NewProp_Server_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOscActor_Statics::NewProp_Server_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOscActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOscActor_Statics::NewProp_Server,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOscActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOscActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOscActor_Statics::ClassParams = {
		&AOscActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOscActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOscActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AOscActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOscActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOscActor()
	{
		if (!Z_Registration_Info_UClass_AOscActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOscActor.OuterSingleton, Z_Construct_UClass_AOscActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOscActor.OuterSingleton;
	}
	template<> CONTACTGLOVEPLUGIN_API UClass* StaticClass<AOscActor>()
	{
		return AOscActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOscActor);
	AOscActor::~AOscActor() {}
	struct Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_OscActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_OscActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOscActor, AOscActor::StaticClass, TEXT("AOscActor"), &Z_Registration_Info_UClass_AOscActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOscActor), 3839886919U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_OscActor_h_333751935(TEXT("/Script/ContactGlovePlugin"),
		Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_OscActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_OscActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
