// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PactOfTheNetherGod/PactOfTheNetherGodGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePactOfTheNetherGodGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PACTOFTHENETHERGOD_API UClass* Z_Construct_UClass_APactOfTheNetherGodGameMode();
	PACTOFTHENETHERGOD_API UClass* Z_Construct_UClass_APactOfTheNetherGodGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PactOfTheNetherGod();
// End Cross Module References
	void APactOfTheNetherGodGameMode::StaticRegisterNativesAPactOfTheNetherGodGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APactOfTheNetherGodGameMode);
	UClass* Z_Construct_UClass_APactOfTheNetherGodGameMode_NoRegister()
	{
		return APactOfTheNetherGodGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APactOfTheNetherGodGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APactOfTheNetherGodGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PactOfTheNetherGod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APactOfTheNetherGodGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PactOfTheNetherGodGameMode.h" },
		{ "ModuleRelativePath", "PactOfTheNetherGodGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APactOfTheNetherGodGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APactOfTheNetherGodGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APactOfTheNetherGodGameMode_Statics::ClassParams = {
		&APactOfTheNetherGodGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APactOfTheNetherGodGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APactOfTheNetherGodGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APactOfTheNetherGodGameMode()
	{
		if (!Z_Registration_Info_UClass_APactOfTheNetherGodGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APactOfTheNetherGodGameMode.OuterSingleton, Z_Construct_UClass_APactOfTheNetherGodGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APactOfTheNetherGodGameMode.OuterSingleton;
	}
	template<> PACTOFTHENETHERGOD_API UClass* StaticClass<APactOfTheNetherGodGameMode>()
	{
		return APactOfTheNetherGodGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APactOfTheNetherGodGameMode);
	APactOfTheNetherGodGameMode::~APactOfTheNetherGodGameMode() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Games_Pact_Of_The_Nether_God_Pact_Of_The_Nether_God_PactOfTheNetherGod_Source_PactOfTheNetherGod_PactOfTheNetherGodGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Games_Pact_Of_The_Nether_God_Pact_Of_The_Nether_God_PactOfTheNetherGod_Source_PactOfTheNetherGod_PactOfTheNetherGodGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APactOfTheNetherGodGameMode, APactOfTheNetherGodGameMode::StaticClass, TEXT("APactOfTheNetherGodGameMode"), &Z_Registration_Info_UClass_APactOfTheNetherGodGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APactOfTheNetherGodGameMode), 3485999200U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Games_Pact_Of_The_Nether_God_Pact_Of_The_Nether_God_PactOfTheNetherGod_Source_PactOfTheNetherGod_PactOfTheNetherGodGameMode_h_3339735068(TEXT("/Script/PactOfTheNetherGod"),
		Z_CompiledInDeferFile_FID_Unreal_Games_Pact_Of_The_Nether_God_Pact_Of_The_Nether_God_PactOfTheNetherGod_Source_PactOfTheNetherGod_PactOfTheNetherGodGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Games_Pact_Of_The_Nether_God_Pact_Of_The_Nether_God_PactOfTheNetherGod_Source_PactOfTheNetherGod_PactOfTheNetherGodGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
