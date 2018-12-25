// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSniper/UnrealSniperHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealSniperHUD() {}
// Cross Module References
	UNREALSNIPER_API UClass* Z_Construct_UClass_AUnrealSniperHUD_NoRegister();
	UNREALSNIPER_API UClass* Z_Construct_UClass_AUnrealSniperHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_UnrealSniper();
// End Cross Module References
	void AUnrealSniperHUD::StaticRegisterNativesAUnrealSniperHUD()
	{
	}
	UClass* Z_Construct_UClass_AUnrealSniperHUD_NoRegister()
	{
		return AUnrealSniperHUD::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealSniperHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealSniperHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealSniper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealSniperHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UnrealSniperHUD.h" },
		{ "ModuleRelativePath", "UnrealSniperHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealSniperHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealSniperHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealSniperHUD_Statics::ClassParams = {
		&AUnrealSniperHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealSniperHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUnrealSniperHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealSniperHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealSniperHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealSniperHUD, 4221812936);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealSniperHUD(Z_Construct_UClass_AUnrealSniperHUD, &AUnrealSniperHUD::StaticClass, TEXT("/Script/UnrealSniper"), TEXT("AUnrealSniperHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealSniperHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
