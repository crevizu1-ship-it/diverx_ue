// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContactGloveComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EColliderSection : uint8;
enum class EControllerBoolInputType : uint8;
enum class EHandSides : uint8;
struct FControllerData;
struct FFlexData;
#ifdef CONTACTGLOVEPLUGIN_ContactGloveComponent_generated_h
#error "ContactGloveComponent.generated.h already included, missing '#pragma once' in ContactGloveComponent.h"
#endif
#define CONTACTGLOVEPLUGIN_ContactGloveComponent_generated_h

#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h_11_DELEGATE \
struct _Script_ContactGlovePlugin_eventFlexDataSignature_Parms \
{ \
	FFlexData FlexData; \
}; \
static inline void FFlexDataSignature_DelegateWrapper(const FMulticastScriptDelegate& FlexDataSignature, FFlexData const& FlexData) \
{ \
	_Script_ContactGlovePlugin_eventFlexDataSignature_Parms Parms; \
	Parms.FlexData=FlexData; \
	FlexDataSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h_12_DELEGATE \
struct _Script_ContactGlovePlugin_eventControllerDataSignature_Parms \
{ \
	FControllerData ControllerData; \
}; \
static inline void FControllerDataSignature_DelegateWrapper(const FMulticastScriptDelegate& ControllerDataSignature, FControllerData const& ControllerData) \
{ \
	_Script_ContactGlovePlugin_eventControllerDataSignature_Parms Parms; \
	Parms.ControllerData=ControllerData; \
	ControllerDataSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h_13_DELEGATE \
struct _Script_ContactGlovePlugin_eventControllerInputSignature_Parms \
{ \
	EHandSides Hand; \
	EControllerBoolInputType Type; \
}; \
static inline void FControllerInputSignature_DelegateWrapper(const FMulticastScriptDelegate& ControllerInputSignature, EHandSides const& Hand, EControllerBoolInputType const& Type) \
{ \
	_Script_ContactGlovePlugin_eventControllerInputSignature_Parms Parms; \
	Parms.Hand=Hand; \
	Parms.Type=Type; \
	ControllerInputSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h_18_SPARSE_DATA
#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFlexData); \
	DECLARE_FUNCTION(execGetControllerData); \
	DECLARE_FUNCTION(execSetHaptics); \
	DECLARE_FUNCTION(execSendVibration);


#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFlexData); \
	DECLARE_FUNCTION(execGetControllerData); \
	DECLARE_FUNCTION(execSetHaptics); \
	DECLARE_FUNCTION(execSendVibration);


#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h_18_ACCESSORS
#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContactGloveComponent(); \
	friend struct Z_Construct_UClass_UContactGloveComponent_Statics; \
public: \
	DECLARE_CLASS(UContactGloveComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ContactGlovePlugin"), NO_API) \
	DECLARE_SERIALIZER(UContactGloveComponent)


#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUContactGloveComponent(); \
	friend struct Z_Construct_UClass_UContactGloveComponent_Statics; \
public: \
	DECLARE_CLASS(UContactGloveComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ContactGlovePlugin"), NO_API) \
	DECLARE_SERIALIZER(UContactGloveComponent)


#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContactGloveComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContactGloveComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContactGloveComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContactGloveComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContactGloveComponent(UContactGloveComponent&&); \
	NO_API UContactGloveComponent(const UContactGloveComponent&); \
public:


#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContactGloveComponent(UContactGloveComponent&&); \
	NO_API UContactGloveComponent(const UContactGloveComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContactGloveComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContactGloveComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UContactGloveComponent)


#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h_15_PROLOG
#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h_18_SPARSE_DATA \
	FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h_18_RPC_WRAPPERS \
	FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h_18_ACCESSORS \
	FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h_18_INCLASS \
	FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h_18_SPARSE_DATA \
	FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h_18_ACCESSORS \
	FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTACTGLOVEPLUGIN_API UClass* StaticClass<class UContactGloveComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGloveComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
