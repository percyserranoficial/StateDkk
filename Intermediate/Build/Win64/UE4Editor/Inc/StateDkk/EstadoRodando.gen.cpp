// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateDkk/EstadoRodando.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoRodando() {}
// Cross Module References
	STATEDKK_API UClass* Z_Construct_UClass_AEstadoRodando_NoRegister();
	STATEDKK_API UClass* Z_Construct_UClass_AEstadoRodando();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StateDkk();
	STATEDKK_API UClass* Z_Construct_UClass_UEstadoBarril_NoRegister();
// End Cross Module References
	void AEstadoRodando::StaticRegisterNativesAEstadoRodando()
	{
	}
	UClass* Z_Construct_UClass_AEstadoRodando_NoRegister()
	{
		return AEstadoRodando::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoRodando_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoRodando_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StateDkk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoRodando_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoRodando.h" },
		{ "ModuleRelativePath", "EstadoRodando.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoRodando_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstadoBarril_NoRegister, (int32)VTABLE_OFFSET(AEstadoRodando, IEstadoBarril), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoRodando_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoRodando>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEstadoRodando_Statics::ClassParams = {
		&AEstadoRodando::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstadoRodando_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoRodando_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoRodando()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEstadoRodando_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEstadoRodando, 899824152);
	template<> STATEDKK_API UClass* StaticClass<AEstadoRodando>()
	{
		return AEstadoRodando::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEstadoRodando(Z_Construct_UClass_AEstadoRodando, &AEstadoRodando::StaticClass, TEXT("/Script/StateDkk"), TEXT("AEstadoRodando"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoRodando);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
