// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateDkk/Fantasma.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFantasma() {}
// Cross Module References
	STATEDKK_API UClass* Z_Construct_UClass_AFantasma_NoRegister();
	STATEDKK_API UClass* Z_Construct_UClass_AFantasma();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_StateDkk();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AFantasma::StaticRegisterNativesAFantasma()
	{
	}
	UClass* Z_Construct_UClass_AFantasma_NoRegister()
	{
		return AFantasma::StaticClass();
	}
	struct Z_Construct_UClass_AFantasma_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FantasmaMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FantasmaMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFantasma_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_StateDkk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFantasma_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Fantasma.h" },
		{ "ModuleRelativePath", "Fantasma.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFantasma_Statics::NewProp_FantasmaMesh_MetaData[] = {
		{ "Category", "Fantasma" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Fantasma.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFantasma_Statics::NewProp_FantasmaMesh = { "FantasmaMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFantasma, FantasmaMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFantasma_Statics::NewProp_FantasmaMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFantasma_Statics::NewProp_FantasmaMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFantasma_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFantasma_Statics::NewProp_FantasmaMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFantasma_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFantasma>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFantasma_Statics::ClassParams = {
		&AFantasma::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFantasma_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFantasma_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFantasma_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFantasma_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFantasma()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFantasma_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFantasma, 1870927060);
	template<> STATEDKK_API UClass* StaticClass<AFantasma>()
	{
		return AFantasma::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFantasma(Z_Construct_UClass_AFantasma, &AFantasma::StaticClass, TEXT("/Script/StateDkk"), TEXT("AFantasma"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFantasma);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
