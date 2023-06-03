// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PactOfTheNetherGod/TriggerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	PACTOFTHENETHERGOD_API UClass* Z_Construct_UClass_UMover_NoRegister();
	PACTOFTHENETHERGOD_API UClass* Z_Construct_UClass_UTriggerComponent();
	PACTOFTHENETHERGOD_API UClass* Z_Construct_UClass_UTriggerComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PactOfTheNetherGod();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerComponent::execsetMover)
	{
		P_GET_OBJECT(UMover,Z_Param_Mover);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setMover(Z_Param_Mover);
		P_NATIVE_END;
	}
	void UTriggerComponent::StaticRegisterNativesUTriggerComponent()
	{
		UClass* Class = UTriggerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "setMover", &UTriggerComponent::execsetMover },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerComponent_setMover_Statics
	{
		struct TriggerComponent_eventsetMover_Parms
		{
			UMover* Mover;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mover_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mover;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerComponent_setMover_Statics::NewProp_Mover_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerComponent_setMover_Statics::NewProp_Mover = { "Mover", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TriggerComponent_eventsetMover_Parms, Mover), Z_Construct_UClass_UMover_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerComponent_setMover_Statics::NewProp_Mover_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerComponent_setMover_Statics::NewProp_Mover_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerComponent_setMover_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerComponent_setMover_Statics::NewProp_Mover,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerComponent_setMover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TriggerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerComponent_setMover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerComponent, nullptr, "setMover", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTriggerComponent_setMover_Statics::TriggerComponent_eventsetMover_Parms), Z_Construct_UFunction_UTriggerComponent_setMover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerComponent_setMover_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerComponent_setMover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerComponent_setMover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerComponent_setMover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTriggerComponent_setMover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTriggerComponent);
	UClass* Z_Construct_UClass_UTriggerComponent_NoRegister()
	{
		return UTriggerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_n_UnlockTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_n_UnlockTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PactOfTheNetherGod,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerComponent_setMover, "setMover" }, // 723569149
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "TriggerComponent.h" },
		{ "ModuleRelativePath", "TriggerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerComponent_Statics::NewProp_n_UnlockTag_MetaData[] = {
		{ "Category", "TriggerComponent" },
		{ "ModuleRelativePath", "TriggerComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTriggerComponent_Statics::NewProp_n_UnlockTag = { "n_UnlockTag", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTriggerComponent, n_UnlockTag), METADATA_PARAMS(Z_Construct_UClass_UTriggerComponent_Statics::NewProp_n_UnlockTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::NewProp_n_UnlockTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerComponent_Statics::NewProp_n_UnlockTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTriggerComponent_Statics::ClassParams = {
		&UTriggerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriggerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerComponent()
	{
		if (!Z_Registration_Info_UClass_UTriggerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTriggerComponent.OuterSingleton, Z_Construct_UClass_UTriggerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTriggerComponent.OuterSingleton;
	}
	template<> PACTOFTHENETHERGOD_API UClass* StaticClass<UTriggerComponent>()
	{
		return UTriggerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerComponent);
	UTriggerComponent::~UTriggerComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Games_Pact_Of_The_Nether_God_Pact_Of_The_Nether_God_PactOfTheNetherGod_Source_PactOfTheNetherGod_TriggerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Games_Pact_Of_The_Nether_God_Pact_Of_The_Nether_God_PactOfTheNetherGod_Source_PactOfTheNetherGod_TriggerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTriggerComponent, UTriggerComponent::StaticClass, TEXT("UTriggerComponent"), &Z_Registration_Info_UClass_UTriggerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTriggerComponent), 1817404790U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Games_Pact_Of_The_Nether_God_Pact_Of_The_Nether_God_PactOfTheNetherGod_Source_PactOfTheNetherGod_TriggerComponent_h_1020214334(TEXT("/Script/PactOfTheNetherGod"),
		Z_CompiledInDeferFile_FID_Unreal_Games_Pact_Of_The_Nether_God_Pact_Of_The_Nether_God_PactOfTheNetherGod_Source_PactOfTheNetherGod_TriggerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Games_Pact_Of_The_Nether_God_Pact_Of_The_Nether_God_PactOfTheNetherGod_Source_PactOfTheNetherGod_TriggerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
