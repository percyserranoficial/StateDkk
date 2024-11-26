// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateDkk/EstadoReposo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoReposo() {}
// Cross Module References
	STATEDKK_API UClass* Z_Construct_UClass_AEstadoReposo_NoRegister();
	STATEDKK_API UClass* Z_Construct_UClass_AEstadoReposo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StateDkk();
	STATEDKK_API UClass* Z_Construct_UClass_UEstadoBarril_NoRegister();
// End Cross Module References
	void AEstadoReposo::StaticRegisterNativesAEstadoReposo()
	{
	}
	UClass* Z_Construct_UClass_AEstadoReposo_NoRegister()
	{
		return AEstadoReposo::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoReposo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoReposo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StateDkk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoReposo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoReposo.h" },
		{ "ModuleRelativePath", "EstadoReposo.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoReposo_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstadoBarril_NoRegister, (int32)VTABLE_OFFSET(AEstadoReposo, IEstadoBarril), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoReposo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoReposo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoReposo_Statics::ClassParams = {
		&AEstadoReposo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstadoReposo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoReposo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoReposo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoReposo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoReposo, 656086257);
	template<> STATEDKK_API UClass* StaticClass<AEstadoReposo>()
	{
		return AEstadoReposo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoReposo(Z_Construct_UClass_AEstadoReposo, &AEstadoReposo::StaticClass, TEXT("/Script/StateDkk"), TEXT("AEstadoReposo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoReposo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
