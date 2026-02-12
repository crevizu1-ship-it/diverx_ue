// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContactGlovePlugin/Public/ContactGlovePluginBPLibrary.h"
#include "ContactGlovePlugin/Public/ControllerData.h"
#include "ContactGlovePlugin/Public/FlexData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContactGlovePluginBPLibrary() {}
// Cross Module References
	CONTACTGLOVEPLUGIN_API UClass* Z_Construct_UClass_UContactGlovePluginBPLibrary();
	CONTACTGLOVEPLUGIN_API UClass* Z_Construct_UClass_UContactGlovePluginBPLibrary_NoRegister();
	CONTACTGLOVEPLUGIN_API UEnum* Z_Construct_UEnum_ContactGlovePlugin_EFingerSection();
	CONTACTGLOVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FControllerData();
	CONTACTGLOVEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFlexData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ContactGlovePlugin();
// End Cross Module References
	DEFINE_FUNCTION(UContactGlovePluginBPLibrary::execSetColliderLocation)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_HandComponent);
		P_GET_OBJECT(USceneComponent,Z_Param_ColliderComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_STRUCT(FVector,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UContactGlovePluginBPLibrary::SetColliderLocation(Z_Param_HandComponent,Z_Param_ColliderComponent,Z_Param_BoneName,Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContactGlovePluginBPLibrary::execGetFingerRotationDegree)
	{
		P_GET_STRUCT_REF(FFlexData,Z_Param_Out_FlexData);
		P_GET_ENUM_REF(EFingerSection,Z_Param_Out_FingerSection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UContactGlovePluginBPLibrary::GetFingerRotationDegree(Z_Param_Out_FlexData,(EFingerSection&)(Z_Param_Out_FingerSection));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContactGlovePluginBPLibrary::execGetMaximumDegree)
	{
		P_GET_ENUM_REF(EFingerSection,Z_Param_Out_FingerSection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UContactGlovePluginBPLibrary::GetMaximumDegree((EFingerSection&)(Z_Param_Out_FingerSection));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContactGlovePluginBPLibrary::execGetFingerRotationAmplitude)
	{
		P_GET_STRUCT_REF(FFlexData,Z_Param_Out_FlexData);
		P_GET_ENUM_REF(EFingerSection,Z_Param_Out_FingerSection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UContactGlovePluginBPLibrary::GetFingerRotationAmplitude(Z_Param_Out_FlexData,(EFingerSection&)(Z_Param_Out_FingerSection));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContactGlovePluginBPLibrary::execExtractControllerData)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FControllerData*)Z_Param__Result=UContactGlovePluginBPLibrary::ExtractControllerData(Z_Param_Out_Bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContactGlovePluginBPLibrary::execExtractFlexData)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFlexData*)Z_Param__Result=UContactGlovePluginBPLibrary::ExtractFlexData(Z_Param_Out_Bytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContactGlovePluginBPLibrary::execExtractFloatValue)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UContactGlovePluginBPLibrary::ExtractFloatValue(Z_Param_Out_Bytes,Z_Param_StartIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContactGlovePluginBPLibrary::execBytesToFloatLittleEndian)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Byte1);
		P_GET_PROPERTY(FByteProperty,Z_Param_Byte2);
		P_GET_PROPERTY(FByteProperty,Z_Param_Byte3);
		P_GET_PROPERTY(FByteProperty,Z_Param_Byte4);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UContactGlovePluginBPLibrary::BytesToFloatLittleEndian(Z_Param_Byte1,Z_Param_Byte2,Z_Param_Byte3,Z_Param_Byte4);
		P_NATIVE_END;
	}
	void UContactGlovePluginBPLibrary::StaticRegisterNativesUContactGlovePluginBPLibrary()
	{
		UClass* Class = UContactGlovePluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BytesToFloatLittleEndian", &UContactGlovePluginBPLibrary::execBytesToFloatLittleEndian },
			{ "ExtractControllerData", &UContactGlovePluginBPLibrary::execExtractControllerData },
			{ "ExtractFlexData", &UContactGlovePluginBPLibrary::execExtractFlexData },
			{ "ExtractFloatValue", &UContactGlovePluginBPLibrary::execExtractFloatValue },
			{ "GetFingerRotationAmplitude", &UContactGlovePluginBPLibrary::execGetFingerRotationAmplitude },
			{ "GetFingerRotationDegree", &UContactGlovePluginBPLibrary::execGetFingerRotationDegree },
			{ "GetMaximumDegree", &UContactGlovePluginBPLibrary::execGetMaximumDegree },
			{ "SetColliderLocation", &UContactGlovePluginBPLibrary::execSetColliderLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UContactGlovePluginBPLibrary_BytesToFloatLittleEndian_Statics
	{
		struct ContactGlovePluginBPLibrary_eventBytesToFloatLittleEndian_Parms
		{
			uint8 Byte1;
			uint8 Byte2;
			uint8 Byte3;
			uint8 Byte4;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Byte1;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Byte2;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Byte3;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Byte4;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_BytesToFloatLittleEndian_Statics::NewProp_Byte1 = { "Byte1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGlovePluginBPLibrary_eventBytesToFloatLittleEndian_Parms, Byte1), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_BytesToFloatLittleEndian_Statics::NewProp_Byte2 = { "Byte2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGlovePluginBPLibrary_eventBytesToFloatLittleEndian_Parms, Byte2), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_BytesToFloatLittleEndian_Statics::NewProp_Byte3 = { "Byte3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGlovePluginBPLibrary_eventBytesToFloatLittleEndian_Parms, Byte3), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_BytesToFloatLittleEndian_Statics::NewProp_Byte4 = { "Byte4", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGlovePluginBPLibrary_eventBytesToFloatLittleEndian_Parms, Byte4), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_BytesToFloatLittleEndian_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGlovePluginBPLibrary_eventBytesToFloatLittleEndian_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContactGlovePluginBPLibrary_BytesToFloatLittleEndian_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_BytesToFloatLittleEndian_Statics::NewProp_Byte1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_BytesToFloatLittleEndian_Statics::NewProp_Byte2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_BytesToFloatLittleEndian_Statics::NewProp_Byte3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_BytesToFloatLittleEndian_Statics::NewProp_Byte4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_BytesToFloatLittleEndian_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContactGlovePluginBPLibrary_BytesToFloatLittleEndian_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContactGlove Functions" },
		{ "ModuleRelativePath", "Public/ContactGlovePluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_BytesToFloatLittleEndian_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContactGlovePluginBPLibrary, nullptr, "BytesToFloatLittleEndian", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContactGlovePluginBPLibrary_BytesToFloatLittleEndian_Statics::ContactGlovePluginBPLibrary_eventBytesToFloatLittleEndian_Parms), Z_Construct_UFunction_UContactGlovePluginBPLibrary_BytesToFloatLittleEndian_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_BytesToFloatLittleEndian_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContactGlovePluginBPLibrary_BytesToFloatLittleEndian_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_BytesToFloatLittleEndian_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContactGlovePluginBPLibrary_BytesToFloatLittleEndian()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContactGlovePluginBPLibrary_BytesToFloatLittleEndian_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractControllerData_Statics
	{
		struct ContactGlovePluginBPLibrary_eventExtractControllerData_Parms
		{
			TArray<uint8> Bytes;
			FControllerData ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractControllerData_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractControllerData_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractControllerData_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGlovePluginBPLibrary_eventExtractControllerData_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractControllerData_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractControllerData_Statics::NewProp_Bytes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractControllerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGlovePluginBPLibrary_eventExtractControllerData_Parms, ReturnValue), Z_Construct_UScriptStruct_FControllerData, METADATA_PARAMS(nullptr, 0) }; // 1116836930
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractControllerData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractControllerData_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractControllerData_Statics::NewProp_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractControllerData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractControllerData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContactGlove Functions" },
		{ "ModuleRelativePath", "Public/ContactGlovePluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractControllerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContactGlovePluginBPLibrary, nullptr, "ExtractControllerData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractControllerData_Statics::ContactGlovePluginBPLibrary_eventExtractControllerData_Parms), Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractControllerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractControllerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractControllerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractControllerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractControllerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractControllerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFlexData_Statics
	{
		struct ContactGlovePluginBPLibrary_eventExtractFlexData_Parms
		{
			TArray<uint8> Bytes;
			FFlexData ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFlexData_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFlexData_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFlexData_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGlovePluginBPLibrary_eventExtractFlexData_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFlexData_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFlexData_Statics::NewProp_Bytes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFlexData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGlovePluginBPLibrary_eventExtractFlexData_Parms, ReturnValue), Z_Construct_UScriptStruct_FFlexData, METADATA_PARAMS(nullptr, 0) }; // 102164489
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFlexData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFlexData_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFlexData_Statics::NewProp_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFlexData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFlexData_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContactGlove Functions" },
		{ "ModuleRelativePath", "Public/ContactGlovePluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFlexData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContactGlovePluginBPLibrary, nullptr, "ExtractFlexData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFlexData_Statics::ContactGlovePluginBPLibrary_eventExtractFlexData_Parms), Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFlexData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFlexData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFlexData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFlexData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFlexData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFlexData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFloatValue_Statics
	{
		struct ContactGlovePluginBPLibrary_eventExtractFloatValue_Parms
		{
			TArray<uint8> Bytes;
			int32 StartIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_StartIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFloatValue_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFloatValue_Statics::NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFloatValue_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGlovePluginBPLibrary_eventExtractFloatValue_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFloatValue_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFloatValue_Statics::NewProp_Bytes_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFloatValue_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGlovePluginBPLibrary_eventExtractFloatValue_Parms, StartIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFloatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGlovePluginBPLibrary_eventExtractFloatValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFloatValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFloatValue_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFloatValue_Statics::NewProp_Bytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFloatValue_Statics::NewProp_StartIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFloatValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFloatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContactGlove Functions" },
		{ "ModuleRelativePath", "Public/ContactGlovePluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContactGlovePluginBPLibrary, nullptr, "ExtractFloatValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFloatValue_Statics::ContactGlovePluginBPLibrary_eventExtractFloatValue_Parms), Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFloatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFloatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFloatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFloatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFloatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude_Statics
	{
		struct ContactGlovePluginBPLibrary_eventGetFingerRotationAmplitude_Parms
		{
			FFlexData FlexData;
			EFingerSection FingerSection;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlexData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FlexData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FingerSection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FingerSection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FingerSection;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude_Statics::NewProp_FlexData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude_Statics::NewProp_FlexData = { "FlexData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGlovePluginBPLibrary_eventGetFingerRotationAmplitude_Parms, FlexData), Z_Construct_UScriptStruct_FFlexData, METADATA_PARAMS(Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude_Statics::NewProp_FlexData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude_Statics::NewProp_FlexData_MetaData)) }; // 102164489
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude_Statics::NewProp_FingerSection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude_Statics::NewProp_FingerSection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude_Statics::NewProp_FingerSection = { "FingerSection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGlovePluginBPLibrary_eventGetFingerRotationAmplitude_Parms, FingerSection), Z_Construct_UEnum_ContactGlovePlugin_EFingerSection, METADATA_PARAMS(Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude_Statics::NewProp_FingerSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude_Statics::NewProp_FingerSection_MetaData)) }; // 3718121088
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGlovePluginBPLibrary_eventGetFingerRotationAmplitude_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude_Statics::NewProp_FlexData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude_Statics::NewProp_FingerSection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude_Statics::NewProp_FingerSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContactGlove Functions" },
		{ "ModuleRelativePath", "Public/ContactGlovePluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContactGlovePluginBPLibrary, nullptr, "GetFingerRotationAmplitude", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude_Statics::ContactGlovePluginBPLibrary_eventGetFingerRotationAmplitude_Parms), Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree_Statics
	{
		struct ContactGlovePluginBPLibrary_eventGetFingerRotationDegree_Parms
		{
			FFlexData FlexData;
			EFingerSection FingerSection;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlexData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FlexData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FingerSection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FingerSection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FingerSection;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree_Statics::NewProp_FlexData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree_Statics::NewProp_FlexData = { "FlexData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGlovePluginBPLibrary_eventGetFingerRotationDegree_Parms, FlexData), Z_Construct_UScriptStruct_FFlexData, METADATA_PARAMS(Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree_Statics::NewProp_FlexData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree_Statics::NewProp_FlexData_MetaData)) }; // 102164489
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree_Statics::NewProp_FingerSection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree_Statics::NewProp_FingerSection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree_Statics::NewProp_FingerSection = { "FingerSection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGlovePluginBPLibrary_eventGetFingerRotationDegree_Parms, FingerSection), Z_Construct_UEnum_ContactGlovePlugin_EFingerSection, METADATA_PARAMS(Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree_Statics::NewProp_FingerSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree_Statics::NewProp_FingerSection_MetaData)) }; // 3718121088
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGlovePluginBPLibrary_eventGetFingerRotationDegree_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree_Statics::NewProp_FlexData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree_Statics::NewProp_FingerSection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree_Statics::NewProp_FingerSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContactGlove Functions" },
		{ "ModuleRelativePath", "Public/ContactGlovePluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContactGlovePluginBPLibrary, nullptr, "GetFingerRotationDegree", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree_Statics::ContactGlovePluginBPLibrary_eventGetFingerRotationDegree_Parms), Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetMaximumDegree_Statics
	{
		struct ContactGlovePluginBPLibrary_eventGetMaximumDegree_Parms
		{
			EFingerSection FingerSection;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_FingerSection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FingerSection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FingerSection;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetMaximumDegree_Statics::NewProp_FingerSection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetMaximumDegree_Statics::NewProp_FingerSection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetMaximumDegree_Statics::NewProp_FingerSection = { "FingerSection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGlovePluginBPLibrary_eventGetMaximumDegree_Parms, FingerSection), Z_Construct_UEnum_ContactGlovePlugin_EFingerSection, METADATA_PARAMS(Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetMaximumDegree_Statics::NewProp_FingerSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetMaximumDegree_Statics::NewProp_FingerSection_MetaData)) }; // 3718121088
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetMaximumDegree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGlovePluginBPLibrary_eventGetMaximumDegree_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetMaximumDegree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetMaximumDegree_Statics::NewProp_FingerSection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetMaximumDegree_Statics::NewProp_FingerSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetMaximumDegree_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetMaximumDegree_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContactGlove Functions" },
		{ "ModuleRelativePath", "Public/ContactGlovePluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetMaximumDegree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContactGlovePluginBPLibrary, nullptr, "GetMaximumDegree", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetMaximumDegree_Statics::ContactGlovePluginBPLibrary_eventGetMaximumDegree_Parms), Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetMaximumDegree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetMaximumDegree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetMaximumDegree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetMaximumDegree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetMaximumDegree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetMaximumDegree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics
	{
		struct ContactGlovePluginBPLibrary_eventSetColliderLocation_Parms
		{
			const USkeletalMeshComponent* HandComponent;
			USceneComponent* ColliderComponent;
			FName BoneName;
			FVector Offset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HandComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColliderComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ColliderComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::NewProp_HandComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::NewProp_HandComponent = { "HandComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGlovePluginBPLibrary_eventSetColliderLocation_Parms, HandComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::NewProp_HandComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::NewProp_HandComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::NewProp_ColliderComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::NewProp_ColliderComponent = { "ColliderComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGlovePluginBPLibrary_eventSetColliderLocation_Parms, ColliderComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::NewProp_ColliderComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::NewProp_ColliderComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGlovePluginBPLibrary_eventSetColliderLocation_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGlovePluginBPLibrary_eventSetColliderLocation_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::NewProp_Offset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::NewProp_HandComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::NewProp_ColliderComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "ContactGlove Functions" },
		{ "CPP_Default_Offset", "" },
		{ "ModuleRelativePath", "Public/ContactGlovePluginBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContactGlovePluginBPLibrary, nullptr, "SetColliderLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::ContactGlovePluginBPLibrary_eventSetColliderLocation_Parms), Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContactGlovePluginBPLibrary);
	UClass* Z_Construct_UClass_UContactGlovePluginBPLibrary_NoRegister()
	{
		return UContactGlovePluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UContactGlovePluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContactGlovePluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ContactGlovePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UContactGlovePluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UContactGlovePluginBPLibrary_BytesToFloatLittleEndian, "BytesToFloatLittleEndian" }, // 847873580
		{ &Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractControllerData, "ExtractControllerData" }, // 352734121
		{ &Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFlexData, "ExtractFlexData" }, // 3194679645
		{ &Z_Construct_UFunction_UContactGlovePluginBPLibrary_ExtractFloatValue, "ExtractFloatValue" }, // 1736715352
		{ &Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationAmplitude, "GetFingerRotationAmplitude" }, // 1849627927
		{ &Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetFingerRotationDegree, "GetFingerRotationDegree" }, // 2317981859
		{ &Z_Construct_UFunction_UContactGlovePluginBPLibrary_GetMaximumDegree, "GetMaximumDegree" }, // 3389494741
		{ &Z_Construct_UFunction_UContactGlovePluginBPLibrary_SetColliderLocation, "SetColliderLocation" }, // 2042655660
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContactGlovePluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "ContactGlovePluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ContactGlovePluginBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContactGlovePluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContactGlovePluginBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContactGlovePluginBPLibrary_Statics::ClassParams = {
		&UContactGlovePluginBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContactGlovePluginBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContactGlovePluginBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContactGlovePluginBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UContactGlovePluginBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContactGlovePluginBPLibrary.OuterSingleton, Z_Construct_UClass_UContactGlovePluginBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContactGlovePluginBPLibrary.OuterSingleton;
	}
	template<> CONTACTGLOVEPLUGIN_API UClass* StaticClass<UContactGlovePluginBPLibrary>()
	{
		return UContactGlovePluginBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContactGlovePluginBPLibrary);
	UContactGlovePluginBPLibrary::~UContactGlovePluginBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContactGlovePluginBPLibrary, UContactGlovePluginBPLibrary::StaticClass, TEXT("UContactGlovePluginBPLibrary"), &Z_Registration_Info_UClass_UContactGlovePluginBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContactGlovePluginBPLibrary), 841203186U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_2989190163(TEXT("/Script/ContactGlovePlugin"),
		Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
