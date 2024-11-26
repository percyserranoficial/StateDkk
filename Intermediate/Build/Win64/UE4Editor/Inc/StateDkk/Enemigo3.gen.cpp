// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateDkk/Enemigo3.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigo3() {}
// Cross Module References
	STATEDKK_API UClass* Z_Construct_UClass_AEnemigo3_NoRegister();
	STATEDKK_API UClass* Z_Construct_UClass_AEnemigo3();
	STATEDKK_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_StateDkk();
// End Cross Module References
	void AEnemigo3::StaticRegisterNativesAEnemigo3()
	{
	}
	UClass* Z_Construct_UClass_AEnemigo3_NoRegister()
	{
		return AEnemigo3::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigo3_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigo3_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_StateDkk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigo3_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Enemigo3.h" },
		{ "ModuleRelativePath", "Enemigo3.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigo3_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigo3>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigo3_Statics::ClassParams = {
		&AEnemigo3::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigo3_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigo3_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigo3()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigo3_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigo3, 4137540229);
	template<> STATEDKK_API UClass* StaticClass<AEnemigo3>()
	{
		return AEnemigo3::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigo3(Z_Construct_UClass_AEnemigo3, &AEnemigo3::StaticClass, TEXT("/Script/StateDkk"), TEXT("AEnemigo3"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigo3);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
