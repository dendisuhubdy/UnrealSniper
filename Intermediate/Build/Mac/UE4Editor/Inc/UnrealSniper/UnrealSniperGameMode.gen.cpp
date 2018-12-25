// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSniper/UnrealSniperGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealSniperGameMode() {}
// Cross Module References
	UNREALSNIPER_API UClass* Z_Construct_UClass_AUnrealSniperGameMode_NoRegister();
	UNREALSNIPER_API UClass* Z_Construct_UClass_AUnrealSniperGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnrealSniper();
// End Cross Module References
	void AUnrealSniperGameMode::StaticRegisterNativesAUnrealSniperGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUnrealSniperGameMode_NoRegister()
	{
		return AUnrealSniperGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealSniperGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealSniperGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealSniper,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealSniperGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnrealSniperGameMode.h" },
		{ "ModuleRelativePath", "UnrealSniperGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealSniperGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealSniperGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealSniperGameMode_Statics::ClassParams = {
		&AUnrealSniperGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealSniperGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUnrealSniperGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealSniperGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealSniperGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealSniperGameMode, 3662672518);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealSniperGameMode(Z_Construct_UClass_AUnrealSniperGameMode, &AUnrealSniperGameMode::StaticClass, TEXT("/Script/UnrealSniper"), TEXT("AUnrealSniperGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealSniperGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
