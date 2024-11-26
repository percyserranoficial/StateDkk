// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateDkk/EnemigoB.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoB() {}
// Cross Module References
	STATEDKK_API UClass* Z_Construct_UClass_AEnemigoB_NoRegister();
	STATEDKK_API UClass* Z_Construct_UClass_AEnemigoB();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StateDkk();
// End Cross Module References
	void AEnemigoB::StaticRegisterNativesAEnemigoB()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoB_NoRegister()
	{
		return AEnemigoB::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoB_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StateDkk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoB_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemigoB.h" },
		{ "ModuleRelativePath", "EnemigoB.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoB>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoB_Statics::ClassParams = {
		&AEnemigoB::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoB_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoB_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoB()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoB_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoB, 1558152026);
	template<> STATEDKK_API UClass* StaticClass<AEnemigoB>()
	{
		return AEnemigoB::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoB(Z_Construct_UClass_AEnemigoB, &AEnemigoB::StaticClass, TEXT("/Script/StateDkk"), TEXT("AEnemigoB"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoB);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
