// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateDkk/Barril.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarril() {}
// Cross Module References
	STATEDKK_API UClass* Z_Construct_UClass_ABarril_NoRegister();
	STATEDKK_API UClass* Z_Construct_UClass_ABarril();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StateDkk();
// End Cross Module References
	void ABarril::StaticRegisterNativesABarril()
	{
	}
	UClass* Z_Construct_UClass_ABarril_NoRegister()
	{
		return ABarril::StaticClass();
	}
	struct Z_Construct_UClass_ABarril_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABarril_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StateDkk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarril_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Barril.h" },
		{ "ModuleRelativePath", "Barril.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABarril_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarril>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABarril_Statics::ClassParams = {
		&ABarril::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABarril_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABarril_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABarril()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABarril_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABarril, 1373229935);
	template<> STATEDKK_API UClass* StaticClass<ABarril>()
	{
		return ABarril::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABarril(Z_Construct_UClass_ABarril, &ABarril::StaticClass, TEXT("/Script/StateDkk"), TEXT("ABarril"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABarril);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
