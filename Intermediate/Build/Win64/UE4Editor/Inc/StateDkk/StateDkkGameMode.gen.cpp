// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateDkk/StateDkkGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateDkkGameMode() {}
// Cross Module References
	STATEDKK_API UClass* Z_Construct_UClass_AStateDkkGameMode_NoRegister();
	STATEDKK_API UClass* Z_Construct_UClass_AStateDkkGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_StateDkk();
// End Cross Module References
	void AStateDkkGameMode::StaticRegisterNativesAStateDkkGameMode()
	{
	}
	UClass* Z_Construct_UClass_AStateDkkGameMode_NoRegister()
	{
		return AStateDkkGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AStateDkkGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStateDkkGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_StateDkk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStateDkkGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "StateDkkGameMode.h" },
		{ "ModuleRelativePath", "StateDkkGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStateDkkGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStateDkkGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStateDkkGameMode_Statics::ClassParams = {
		&AStateDkkGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AStateDkkGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStateDkkGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStateDkkGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStateDkkGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStateDkkGameMode, 698625484);
	template<> STATEDKK_API UClass* StaticClass<AStateDkkGameMode>()
	{
		return AStateDkkGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStateDkkGameMode(Z_Construct_UClass_AStateDkkGameMode, &AStateDkkGameMode::StaticClass, TEXT("/Script/StateDkk"), TEXT("AStateDkkGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStateDkkGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
