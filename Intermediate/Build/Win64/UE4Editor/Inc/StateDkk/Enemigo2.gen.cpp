// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateDkk/Enemigo2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigo2() {}
// Cross Module References
	STATEDKK_API UClass* Z_Construct_UClass_AEnemigo2_NoRegister();
	STATEDKK_API UClass* Z_Construct_UClass_AEnemigo2();
	STATEDKK_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_StateDkk();
// End Cross Module References
	void AEnemigo2::StaticRegisterNativesAEnemigo2()
	{
	}
	UClass* Z_Construct_UClass_AEnemigo2_NoRegister()
	{
		return AEnemigo2::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigo2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigo2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_StateDkk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Enemigo2.h" },
		{ "ModuleRelativePath", "Enemigo2.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigo2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigo2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigo2_Statics::ClassParams = {
		&AEnemigo2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigo2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigo2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigo2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigo2, 830965610);
	template<> STATEDKK_API UClass* StaticClass<AEnemigo2>()
	{
		return AEnemigo2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigo2(Z_Construct_UClass_AEnemigo2, &AEnemigo2::StaticClass, TEXT("/Script/StateDkk"), TEXT("AEnemigo2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigo2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
