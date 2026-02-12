// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContactGlovePlugin/Public/ContactGloveHapticsHandler.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContactGloveHapticsHandler() {}
// Cross Module References
	CONTACTGLOVEPLUGIN_API UClass* Z_Construct_UClass_AContactGloveHapticsHandler();
	CONTACTGLOVEPLUGIN_API UClass* Z_Construct_UClass_AContactGloveHapticsHandler_NoRegister();
	CONTACTGLOVEPLUGIN_API UEnum* Z_Construct_UEnum_ContactGlovePlugin_EColliderSection();
	CONTACTGLOVEPLUGIN_API UEnum* Z_Construct_UEnum_ContactGlovePlugin_EHandSides();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_ContactGlovePlugin();
// End Cross Module References
	DEFINE_FUNCTION(AContactGloveHapticsHandler::execOnExit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExit(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AContactGloveHapticsHandler::execOnEnter)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnter(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AContactGloveHapticsHandler::StaticRegisterNativesAContactGloveHapticsHandler()
	{
		UClass* Class = AContactGloveHapticsHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEnter", &AContactGloveHapticsHandler::execOnEnter },
			{ "OnExit", &AContactGloveHapticsHandler::execOnExit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics
	{
		struct ContactGloveHapticsHandler_eventOnEnter_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGloveHapticsHandler_eventOnEnter_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGloveHapticsHandler_eventOnEnter_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGloveHapticsHandler_eventOnEnter_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGloveHapticsHandler_eventOnEnter_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ContactGloveHapticsHandler_eventOnEnter_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContactGloveHapticsHandler_eventOnEnter_Parms), &Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGloveHapticsHandler_eventOnEnter_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContactGloveHapticsHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AContactGloveHapticsHandler, nullptr, "OnEnter", nullptr, nullptr, sizeof(Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::ContactGloveHapticsHandler_eventOnEnter_Parms), Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit_Statics
	{
		struct ContactGloveHapticsHandler_eventOnExit_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGloveHapticsHandler_eventOnExit_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGloveHapticsHandler_eventOnExit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGloveHapticsHandler_eventOnExit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContactGloveHapticsHandler_eventOnExit_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContactGloveHapticsHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AContactGloveHapticsHandler, nullptr, "OnExit", nullptr, nullptr, sizeof(Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit_Statics::ContactGloveHapticsHandler_eventOnExit_Parms), Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AContactGloveHapticsHandler);
	UClass* Z_Construct_UClass_AContactGloveHapticsHandler_NoRegister()
	{
		return AContactGloveHapticsHandler::StaticClass();
	}
	struct Z_Construct_UClass_AContactGloveHapticsHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HandComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultSceneRoot;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoneMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BoneMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColliderRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColliderRadius;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ColliderComponentMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColliderComponentMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColliderComponentMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColliderComponentMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ColliderComponentMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColliderOffsetMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColliderOffsetMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColliderOffsetMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColliderOffsetMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ColliderOffsetMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AContactGloveHapticsHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ContactGlovePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AContactGloveHapticsHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AContactGloveHapticsHandler_OnEnter, "OnEnter" }, // 3035174547
		{ &Z_Construct_UFunction_AContactGloveHapticsHandler_OnExit, "OnExit" }, // 546126634
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContactGloveHapticsHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContactGloveHapticsHandler.h" },
		{ "ModuleRelativePath", "Public/ContactGloveHapticsHandler.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_HandComponent_MetaData[] = {
		{ "Category", "HapticsHandler" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ContactGloveHapticsHandler.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_HandComponent = { "HandComponent", nullptr, (EPropertyFlags)0x0014000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AContactGloveHapticsHandler, HandComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_HandComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_HandComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_DefaultSceneRoot_MetaData[] = {
		{ "Category", "HapticsHandler" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ContactGloveHapticsHandler.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_DefaultSceneRoot = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x0014000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AContactGloveHapticsHandler, DefaultSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_DefaultSceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_DefaultSceneRoot_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_Hand_MetaData[] = {
		{ "Category", "HapticsHandler" },
		{ "ModuleRelativePath", "Public/ContactGloveHapticsHandler.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AContactGloveHapticsHandler, Hand), Z_Construct_UEnum_ContactGlovePlugin_EHandSides, METADATA_PARAMS(Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_Hand_MetaData)) }; // 3300301671
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_BoneMap_ValueProp = { "BoneMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_BoneMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_BoneMap_Key_KeyProp = { "BoneMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_ContactGlovePlugin_EColliderSection, METADATA_PARAMS(nullptr, 0) }; // 3040568090
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_BoneMap_MetaData[] = {
		{ "Category", "HapticsHandler" },
		{ "ModuleRelativePath", "Public/ContactGloveHapticsHandler.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_BoneMap = { "BoneMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AContactGloveHapticsHandler, BoneMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_BoneMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_BoneMap_MetaData)) }; // 3040568090
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderRadius_MetaData[] = {
		{ "Category", "HapticsHandler" },
		{ "ModuleRelativePath", "Public/ContactGloveHapticsHandler.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderRadius = { "ColliderRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AContactGloveHapticsHandler, ColliderRadius), METADATA_PARAMS(Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderRadius_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderComponentMap_ValueProp = { "ColliderComponentMap", nullptr, (EPropertyFlags)0x0004000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderComponentMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderComponentMap_Key_KeyProp = { "ColliderComponentMap_Key", nullptr, (EPropertyFlags)0x0000000000080009, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_ContactGlovePlugin_EColliderSection, METADATA_PARAMS(nullptr, 0) }; // 3040568090
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderComponentMap_MetaData[] = {
		{ "Category", "HapticsHandler" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ContactGloveHapticsHandler.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderComponentMap = { "ColliderComponentMap", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AContactGloveHapticsHandler, ColliderComponentMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderComponentMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderComponentMap_MetaData)) }; // 3040568090
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderOffsetMap_ValueProp = { "ColliderOffsetMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderOffsetMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderOffsetMap_Key_KeyProp = { "ColliderOffsetMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_ContactGlovePlugin_EColliderSection, METADATA_PARAMS(nullptr, 0) }; // 3040568090
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderOffsetMap_MetaData[] = {
		{ "Category", "HapticsHandler" },
		{ "ModuleRelativePath", "Public/ContactGloveHapticsHandler.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderOffsetMap = { "ColliderOffsetMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AContactGloveHapticsHandler, ColliderOffsetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderOffsetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderOffsetMap_MetaData)) }; // 3040568090
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AContactGloveHapticsHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_HandComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_DefaultSceneRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_Hand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_BoneMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_BoneMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_BoneMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_BoneMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderComponentMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderComponentMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderComponentMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderComponentMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderOffsetMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderOffsetMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderOffsetMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AContactGloveHapticsHandler_Statics::NewProp_ColliderOffsetMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AContactGloveHapticsHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AContactGloveHapticsHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AContactGloveHapticsHandler_Statics::ClassParams = {
		&AContactGloveHapticsHandler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AContactGloveHapticsHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AContactGloveHapticsHandler_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AContactGloveHapticsHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AContactGloveHapticsHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AContactGloveHapticsHandler()
	{
		if (!Z_Registration_Info_UClass_AContactGloveHapticsHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AContactGloveHapticsHandler.OuterSingleton, Z_Construct_UClass_AContactGloveHapticsHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AContactGloveHapticsHandler.OuterSingleton;
	}
	template<> CONTACTGLOVEPLUGIN_API UClass* StaticClass<AContactGloveHapticsHandler>()
	{
		return AContactGloveHapticsHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AContactGloveHapticsHandler);
	AContactGloveHapticsHandler::~AContactGloveHapticsHandler() {}
	struct Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveHapticsHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveHapticsHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AContactGloveHapticsHandler, AContactGloveHapticsHandler::StaticClass, TEXT("AContactGloveHapticsHandler"), &Z_Registration_Info_UClass_AContactGloveHapticsHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AContactGloveHapticsHandler), 121711201U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveHapticsHandler_h_2494032007(TEXT("/Script/ContactGlovePlugin"),
		Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveHapticsHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveHapticsHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
