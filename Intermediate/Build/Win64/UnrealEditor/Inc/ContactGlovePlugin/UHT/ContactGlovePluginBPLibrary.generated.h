// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContactGlovePluginBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
class USkeletalMeshComponent;
enum class EFingerSection : uint8;
struct FControllerData;
struct FFlexData;
#ifdef CONTACTGLOVEPLUGIN_ContactGlovePluginBPLibrary_generated_h
#error "ContactGlovePluginBPLibrary.generated.h already included, missing '#pragma once' in ContactGlovePluginBPLibrary.h"
#endif
#define CONTACTGLOVEPLUGIN_ContactGlovePluginBPLibrary_generated_h

#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_30_SPARSE_DATA
#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetColliderLocation); \
	DECLARE_FUNCTION(execGetFingerRotationDegree); \
	DECLARE_FUNCTION(execGetMaximumDegree); \
	DECLARE_FUNCTION(execGetFingerRotationAmplitude); \
	DECLARE_FUNCTION(execExtractControllerData); \
	DECLARE_FUNCTION(execExtractFlexData); \
	DECLARE_FUNCTION(execExtractFloatValue); \
	DECLARE_FUNCTION(execBytesToFloatLittleEndian);


#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetColliderLocation); \
	DECLARE_FUNCTION(execGetFingerRotationDegree); \
	DECLARE_FUNCTION(execGetMaximumDegree); \
	DECLARE_FUNCTION(execGetFingerRotationAmplitude); \
	DECLARE_FUNCTION(execExtractControllerData); \
	DECLARE_FUNCTION(execExtractFlexData); \
	DECLARE_FUNCTION(execExtractFloatValue); \
	DECLARE_FUNCTION(execBytesToFloatLittleEndian);


#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_30_ACCESSORS
#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContactGlovePluginBPLibrary(); \
	friend struct Z_Construct_UClass_UContactGlovePluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UContactGlovePluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContactGlovePlugin"), NO_API) \
	DECLARE_SERIALIZER(UContactGlovePluginBPLibrary)


#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUContactGlovePluginBPLibrary(); \
	friend struct Z_Construct_UClass_UContactGlovePluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UContactGlovePluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContactGlovePlugin"), NO_API) \
	DECLARE_SERIALIZER(UContactGlovePluginBPLibrary)


#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContactGlovePluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContactGlovePluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContactGlovePluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContactGlovePluginBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContactGlovePluginBPLibrary(UContactGlovePluginBPLibrary&&); \
	NO_API UContactGlovePluginBPLibrary(const UContactGlovePluginBPLibrary&); \
public: \
	NO_API virtual ~UContactGlovePluginBPLibrary();


#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContactGlovePluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContactGlovePluginBPLibrary(UContactGlovePluginBPLibrary&&); \
	NO_API UContactGlovePluginBPLibrary(const UContactGlovePluginBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContactGlovePluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContactGlovePluginBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContactGlovePluginBPLibrary) \
	NO_API virtual ~UContactGlovePluginBPLibrary();


#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_27_PROLOG
#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_30_SPARSE_DATA \
	FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_30_RPC_WRAPPERS \
	FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_30_ACCESSORS \
	FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_30_INCLASS \
	FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_30_SPARSE_DATA \
	FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_30_ACCESSORS \
	FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_30_INCLASS_NO_PURE_DECLS \
	FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ContactGlovePluginBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTACTGLOVEPLUGIN_API UClass* StaticClass<class UContactGlovePluginBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_ContactGlovePluginBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
