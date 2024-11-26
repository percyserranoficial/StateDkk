// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateDkk/EnemigoC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoC() {}
// Cross Module References
	STATEDKK_API UClass* Z_Construct_UClass_AEnemigoC_NoRegister();
	STATEDKK_API UClass* Z_Construct_UClass_AEnemigoC();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StateDkk();
// End Cross Module References
	void AEnemigoC::StaticRegisterNativesAEnemigoC()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoC_NoRegister()
	{
		return AEnemigoC::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StateDkk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoC_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemigoC.h" },
		{ "ModuleRelativePath", "EnemigoC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoC_Statics::ClassParams = {
		&AEnemigoC::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoC, 2686041474);
	template<> STATEDKK_API UClass* StaticClass<AEnemigoC>()
	{
		return AEnemigoC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoC(Z_Construct_UClass_AEnemigoC, &AEnemigoC::StaticClass, TEXT("/Script/StateDkk"), TEXT("AEnemigoC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
