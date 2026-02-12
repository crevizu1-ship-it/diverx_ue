// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContactGlovePlugin/Public/Hand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHand() {}
// Cross Module References
	CONTACTGLOVEPLUGIN_API UEnum* Z_Construct_UEnum_ContactGlovePlugin_EColliderSection();
	CONTACTGLOVEPLUGIN_API UEnum* Z_Construct_UEnum_ContactGlovePlugin_EControllerBoolInputType();
	CONTACTGLOVEPLUGIN_API UEnum* Z_Construct_UEnum_ContactGlovePlugin_EControllerFloatInputType();
	CONTACTGLOVEPLUGIN_API UEnum* Z_Construct_UEnum_ContactGlovePlugin_EFingerSection();
	CONTACTGLOVEPLUGIN_API UEnum* Z_Construct_UEnum_ContactGlovePlugin_EHandSides();
	UPackage* Z_Construct_UPackage__Script_ContactGlovePlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandSides;
	static UEnum* EHandSides_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHandSides.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHandSides.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ContactGlovePlugin_EHandSides, Z_Construct_UPackage__Script_ContactGlovePlugin(), TEXT("EHandSides"));
		}
		return Z_Registration_Info_UEnum_EHandSides.OuterSingleton;
	}
	template<> CONTACTGLOVEPLUGIN_API UEnum* StaticEnum<EHandSides>()
	{
		return EHandSides_StaticEnum();
	}
	struct Z_Construct_UEnum_ContactGlovePlugin_EHandSides_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ContactGlovePlugin_EHandSides_Statics::Enumerators[] = {
		{ "EHandSides::Left", (int64)EHandSides::Left },
		{ "EHandSides::Right", (int64)EHandSides::Right },
		{ "EHandSides::Num", (int64)EHandSides::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ContactGlovePlugin_EHandSides_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.Name", "EHandSides::Left" },
		{ "ModuleRelativePath", "Public/Hand.h" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EHandSides::Num" },
		{ "Right.Name", "EHandSides::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ContactGlovePlugin_EHandSides_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ContactGlovePlugin,
		nullptr,
		"EHandSides",
		"EHandSides",
		Z_Construct_UEnum_ContactGlovePlugin_EHandSides_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ContactGlovePlugin_EHandSides_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ContactGlovePlugin_EHandSides_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ContactGlovePlugin_EHandSides_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ContactGlovePlugin_EHandSides()
	{
		if (!Z_Registration_Info_UEnum_EHandSides.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandSides.InnerSingleton, Z_Construct_UEnum_ContactGlovePlugin_EHandSides_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHandSides.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EColliderSection;
	static UEnum* EColliderSection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EColliderSection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EColliderSection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ContactGlovePlugin_EColliderSection, Z_Construct_UPackage__Script_ContactGlovePlugin(), TEXT("EColliderSection"));
		}
		return Z_Registration_Info_UEnum_EColliderSection.OuterSingleton;
	}
	template<> CONTACTGLOVEPLUGIN_API UEnum* StaticEnum<EColliderSection>()
	{
		return EColliderSection_StaticEnum();
	}
	struct Z_Construct_UEnum_ContactGlovePlugin_EColliderSection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ContactGlovePlugin_EColliderSection_Statics::Enumerators[] = {
		{ "EColliderSection::ThumbDistal", (int64)EColliderSection::ThumbDistal },
		{ "EColliderSection::IndexDistal", (int64)EColliderSection::IndexDistal },
		{ "EColliderSection::MiddleDistal", (int64)EColliderSection::MiddleDistal },
		{ "EColliderSection::RingDistal", (int64)EColliderSection::RingDistal },
		{ "EColliderSection::Num", (int64)EColliderSection::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ContactGlovePlugin_EColliderSection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IndexDistal.Name", "EColliderSection::IndexDistal" },
		{ "MiddleDistal.Name", "EColliderSection::MiddleDistal" },
		{ "ModuleRelativePath", "Public/Hand.h" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EColliderSection::Num" },
		{ "RingDistal.Name", "EColliderSection::RingDistal" },
		{ "ThumbDistal.Name", "EColliderSection::ThumbDistal" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ContactGlovePlugin_EColliderSection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ContactGlovePlugin,
		nullptr,
		"EColliderSection",
		"EColliderSection",
		Z_Construct_UEnum_ContactGlovePlugin_EColliderSection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ContactGlovePlugin_EColliderSection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ContactGlovePlugin_EColliderSection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ContactGlovePlugin_EColliderSection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ContactGlovePlugin_EColliderSection()
	{
		if (!Z_Registration_Info_UEnum_EColliderSection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EColliderSection.InnerSingleton, Z_Construct_UEnum_ContactGlovePlugin_EColliderSection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EColliderSection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFingerSection;
	static UEnum* EFingerSection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFingerSection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFingerSection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ContactGlovePlugin_EFingerSection, Z_Construct_UPackage__Script_ContactGlovePlugin(), TEXT("EFingerSection"));
		}
		return Z_Registration_Info_UEnum_EFingerSection.OuterSingleton;
	}
	template<> CONTACTGLOVEPLUGIN_API UEnum* StaticEnum<EFingerSection>()
	{
		return EFingerSection_StaticEnum();
	}
	struct Z_Construct_UEnum_ContactGlovePlugin_EFingerSection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ContactGlovePlugin_EFingerSection_Statics::Enumerators[] = {
		{ "EFingerSection::LittleProximal", (int64)EFingerSection::LittleProximal },
		{ "EFingerSection::LittleIntermediate", (int64)EFingerSection::LittleIntermediate },
		{ "EFingerSection::LittleDistal", (int64)EFingerSection::LittleDistal },
		{ "EFingerSection::RingProximal", (int64)EFingerSection::RingProximal },
		{ "EFingerSection::RingIntermediate", (int64)EFingerSection::RingIntermediate },
		{ "EFingerSection::RingDistal", (int64)EFingerSection::RingDistal },
		{ "EFingerSection::MiddleProximal", (int64)EFingerSection::MiddleProximal },
		{ "EFingerSection::MiddleIntermediate", (int64)EFingerSection::MiddleIntermediate },
		{ "EFingerSection::MiddleDistal", (int64)EFingerSection::MiddleDistal },
		{ "EFingerSection::IndexProximal", (int64)EFingerSection::IndexProximal },
		{ "EFingerSection::IndexIntermediate", (int64)EFingerSection::IndexIntermediate },
		{ "EFingerSection::IndexDistal", (int64)EFingerSection::IndexDistal },
		{ "EFingerSection::ThumbMetacarpal", (int64)EFingerSection::ThumbMetacarpal },
		{ "EFingerSection::ThumbProximal", (int64)EFingerSection::ThumbProximal },
		{ "EFingerSection::ThumbDistal", (int64)EFingerSection::ThumbDistal },
		{ "EFingerSection::ThumbSplay", (int64)EFingerSection::ThumbSplay },
		{ "EFingerSection::Num", (int64)EFingerSection::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ContactGlovePlugin_EFingerSection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IndexDistal.Name", "EFingerSection::IndexDistal" },
		{ "IndexIntermediate.Name", "EFingerSection::IndexIntermediate" },
		{ "IndexProximal.Name", "EFingerSection::IndexProximal" },
		{ "LittleDistal.Name", "EFingerSection::LittleDistal" },
		{ "LittleIntermediate.Name", "EFingerSection::LittleIntermediate" },
		{ "LittleProximal.Name", "EFingerSection::LittleProximal" },
		{ "MiddleDistal.Name", "EFingerSection::MiddleDistal" },
		{ "MiddleIntermediate.Name", "EFingerSection::MiddleIntermediate" },
		{ "MiddleProximal.Name", "EFingerSection::MiddleProximal" },
		{ "ModuleRelativePath", "Public/Hand.h" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EFingerSection::Num" },
		{ "RingDistal.Name", "EFingerSection::RingDistal" },
		{ "RingIntermediate.Name", "EFingerSection::RingIntermediate" },
		{ "RingProximal.Name", "EFingerSection::RingProximal" },
		{ "ThumbDistal.Name", "EFingerSection::ThumbDistal" },
		{ "ThumbMetacarpal.Name", "EFingerSection::ThumbMetacarpal" },
		{ "ThumbProximal.Name", "EFingerSection::ThumbProximal" },
		{ "ThumbSplay.Name", "EFingerSection::ThumbSplay" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ContactGlovePlugin_EFingerSection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ContactGlovePlugin,
		nullptr,
		"EFingerSection",
		"EFingerSection",
		Z_Construct_UEnum_ContactGlovePlugin_EFingerSection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ContactGlovePlugin_EFingerSection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ContactGlovePlugin_EFingerSection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ContactGlovePlugin_EFingerSection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ContactGlovePlugin_EFingerSection()
	{
		if (!Z_Registration_Info_UEnum_EFingerSection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFingerSection.InnerSingleton, Z_Construct_UEnum_ContactGlovePlugin_EFingerSection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFingerSection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControllerBoolInputType;
	static UEnum* EControllerBoolInputType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EControllerBoolInputType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EControllerBoolInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ContactGlovePlugin_EControllerBoolInputType, Z_Construct_UPackage__Script_ContactGlovePlugin(), TEXT("EControllerBoolInputType"));
		}
		return Z_Registration_Info_UEnum_EControllerBoolInputType.OuterSingleton;
	}
	template<> CONTACTGLOVEPLUGIN_API UEnum* StaticEnum<EControllerBoolInputType>()
	{
		return EControllerBoolInputType_StaticEnum();
	}
	struct Z_Construct_UEnum_ContactGlovePlugin_EControllerBoolInputType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ContactGlovePlugin_EControllerBoolInputType_Statics::Enumerators[] = {
		{ "EControllerBoolInputType::A", (int64)EControllerBoolInputType::A },
		{ "EControllerBoolInputType::B", (int64)EControllerBoolInputType::B },
		{ "EControllerBoolInputType::Home", (int64)EControllerBoolInputType::Home },
		{ "EControllerBoolInputType::JoystickButton", (int64)EControllerBoolInputType::JoystickButton },
		{ "EControllerBoolInputType::TrackpadTouch", (int64)EControllerBoolInputType::TrackpadTouch },
		{ "EControllerBoolInputType::Num", (int64)EControllerBoolInputType::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ContactGlovePlugin_EControllerBoolInputType_Statics::Enum_MetaDataParams[] = {
		{ "A.Name", "EControllerBoolInputType::A" },
		{ "B.Name", "EControllerBoolInputType::B" },
		{ "BlueprintType", "true" },
		{ "Home.Name", "EControllerBoolInputType::Home" },
		{ "JoystickButton.Name", "EControllerBoolInputType::JoystickButton" },
		{ "ModuleRelativePath", "Public/Hand.h" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EControllerBoolInputType::Num" },
		{ "TrackpadTouch.Name", "EControllerBoolInputType::TrackpadTouch" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ContactGlovePlugin_EControllerBoolInputType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ContactGlovePlugin,
		nullptr,
		"EControllerBoolInputType",
		"EControllerBoolInputType",
		Z_Construct_UEnum_ContactGlovePlugin_EControllerBoolInputType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ContactGlovePlugin_EControllerBoolInputType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ContactGlovePlugin_EControllerBoolInputType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ContactGlovePlugin_EControllerBoolInputType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ContactGlovePlugin_EControllerBoolInputType()
	{
		if (!Z_Registration_Info_UEnum_EControllerBoolInputType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControllerBoolInputType.InnerSingleton, Z_Construct_UEnum_ContactGlovePlugin_EControllerBoolInputType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EControllerBoolInputType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControllerFloatInputType;
	static UEnum* EControllerFloatInputType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EControllerFloatInputType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EControllerFloatInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ContactGlovePlugin_EControllerFloatInputType, Z_Construct_UPackage__Script_ContactGlovePlugin(), TEXT("EControllerFloatInputType"));
		}
		return Z_Registration_Info_UEnum_EControllerFloatInputType.OuterSingleton;
	}
	template<> CONTACTGLOVEPLUGIN_API UEnum* StaticEnum<EControllerFloatInputType>()
	{
		return EControllerFloatInputType_StaticEnum();
	}
	struct Z_Construct_UEnum_ContactGlovePlugin_EControllerFloatInputType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ContactGlovePlugin_EControllerFloatInputType_Statics::Enumerators[] = {
		{ "EControllerFloatInputType::JoystickX", (int64)EControllerFloatInputType::JoystickX },
		{ "EControllerFloatInputType::JoystickY", (int64)EControllerFloatInputType::JoystickY },
		{ "EControllerFloatInputType::Trigger", (int64)EControllerFloatInputType::Trigger },
		{ "EControllerFloatInputType::GripValue", (int64)EControllerFloatInputType::GripValue },
		{ "EControllerFloatInputType::GripForce", (int64)EControllerFloatInputType::GripForce },
		{ "EControllerFloatInputType::Num", (int64)EControllerFloatInputType::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ContactGlovePlugin_EControllerFloatInputType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GripForce.Name", "EControllerFloatInputType::GripForce" },
		{ "GripValue.Name", "EControllerFloatInputType::GripValue" },
		{ "JoystickX.Name", "EControllerFloatInputType::JoystickX" },
		{ "JoystickY.Name", "EControllerFloatInputType::JoystickY" },
		{ "ModuleRelativePath", "Public/Hand.h" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EControllerFloatInputType::Num" },
		{ "Trigger.Name", "EControllerFloatInputType::Trigger" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ContactGlovePlugin_EControllerFloatInputType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ContactGlovePlugin,
		nullptr,
		"EControllerFloatInputType",
		"EControllerFloatInputType",
		Z_Construct_UEnum_ContactGlovePlugin_EControllerFloatInputType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ContactGlovePlugin_EControllerFloatInputType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ContactGlovePlugin_EControllerFloatInputType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ContactGlovePlugin_EControllerFloatInputType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ContactGlovePlugin_EControllerFloatInputType()
	{
		if (!Z_Registration_Info_UEnum_EControllerFloatInputType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControllerFloatInputType.InnerSingleton, Z_Construct_UEnum_ContactGlovePlugin_EControllerFloatInputType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EControllerFloatInputType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_Hand_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_Hand_h_Statics::EnumInfo[] = {
		{ EHandSides_StaticEnum, TEXT("EHandSides"), &Z_Registration_Info_UEnum_EHandSides, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3300301671U) },
		{ EColliderSection_StaticEnum, TEXT("EColliderSection"), &Z_Registration_Info_UEnum_EColliderSection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3040568090U) },
		{ EFingerSection_StaticEnum, TEXT("EFingerSection"), &Z_Registration_Info_UEnum_EFingerSection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3718121088U) },
		{ EControllerBoolInputType_StaticEnum, TEXT("EControllerBoolInputType"), &Z_Registration_Info_UEnum_EControllerBoolInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1581532224U) },
		{ EControllerFloatInputType_StaticEnum, TEXT("EControllerFloatInputType"), &Z_Registration_Info_UEnum_EControllerFloatInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3860961416U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_Hand_h_2545633446(TEXT("/Script/ContactGlovePlugin"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_Hand_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sakod_Downloads_tmp_ContactGlovePlugin_HostProject_Plugins_ContactGlovePlugin_Source_ContactGlovePlugin_Public_Hand_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
