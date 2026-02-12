// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Hand.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTACTGLOVEPLUGIN_Hand_generated_h
#error "Hand.generated.h already included, missing '#pragma once' in Hand.h"
#endif
#define CONTACTGLOVEPLUGIN_Hand_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_Hand_h


#define FOREACH_ENUM_EHANDSIDES(op) \
	op(EHandSides::Left) \
	op(EHandSides::Right) \
	op(EHandSides::Num) 

enum class EHandSides : uint8;
template<> struct TIsUEnumClass<EHandSides> { enum { Value = true }; };
template<> CONTACTGLOVEPLUGIN_API UEnum* StaticEnum<EHandSides>();

#define FOREACH_ENUM_ECOLLIDERSECTION(op) \
	op(EColliderSection::ThumbDistal) \
	op(EColliderSection::IndexDistal) \
	op(EColliderSection::MiddleDistal) \
	op(EColliderSection::RingDistal) \
	op(EColliderSection::Num) 

enum class EColliderSection : uint8;
template<> struct TIsUEnumClass<EColliderSection> { enum { Value = true }; };
template<> CONTACTGLOVEPLUGIN_API UEnum* StaticEnum<EColliderSection>();

#define FOREACH_ENUM_EFINGERSECTION(op) \
	op(EFingerSection::LittleProximal) \
	op(EFingerSection::LittleIntermediate) \
	op(EFingerSection::LittleDistal) \
	op(EFingerSection::RingProximal) \
	op(EFingerSection::RingIntermediate) \
	op(EFingerSection::RingDistal) \
	op(EFingerSection::MiddleProximal) \
	op(EFingerSection::MiddleIntermediate) \
	op(EFingerSection::MiddleDistal) \
	op(EFingerSection::IndexProximal) \
	op(EFingerSection::IndexIntermediate) \
	op(EFingerSection::IndexDistal) \
	op(EFingerSection::ThumbMetacarpal) \
	op(EFingerSection::ThumbProximal) \
	op(EFingerSection::ThumbDistal) \
	op(EFingerSection::ThumbSplay) \
	op(EFingerSection::Num) 

enum class EFingerSection : uint8;
template<> struct TIsUEnumClass<EFingerSection> { enum { Value = true }; };
template<> CONTACTGLOVEPLUGIN_API UEnum* StaticEnum<EFingerSection>();

#define FOREACH_ENUM_ECONTROLLERBOOLINPUTTYPE(op) \
	op(EControllerBoolInputType::A) \
	op(EControllerBoolInputType::B) \
	op(EControllerBoolInputType::Home) \
	op(EControllerBoolInputType::JoystickButton) \
	op(EControllerBoolInputType::TrackpadTouch) \
	op(EControllerBoolInputType::Num) 

enum class EControllerBoolInputType : uint8;
template<> struct TIsUEnumClass<EControllerBoolInputType> { enum { Value = true }; };
template<> CONTACTGLOVEPLUGIN_API UEnum* StaticEnum<EControllerBoolInputType>();

#define FOREACH_ENUM_ECONTROLLERFLOATINPUTTYPE(op) \
	op(EControllerFloatInputType::JoystickX) \
	op(EControllerFloatInputType::JoystickY) \
	op(EControllerFloatInputType::Trigger) \
	op(EControllerFloatInputType::GripValue) \
	op(EControllerFloatInputType::GripForce) \
	op(EControllerFloatInputType::Num) 

enum class EControllerFloatInputType : uint8;
template<> struct TIsUEnumClass<EControllerFloatInputType> { enum { Value = true }; };
template<> CONTACTGLOVEPLUGIN_API UEnum* StaticEnum<EControllerFloatInputType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
