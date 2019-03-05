// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Paintball_TiltonGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaintball_TiltonGameMode() {}
// Cross Module References
	PAINTBALL_TILTON_API UClass* Z_Construct_UClass_APaintball_TiltonGameMode_NoRegister();
	PAINTBALL_TILTON_API UClass* Z_Construct_UClass_APaintball_TiltonGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Paintball_Tilton();
// End Cross Module References
	void APaintball_TiltonGameMode::StaticRegisterNativesAPaintball_TiltonGameMode()
	{
	}
	UClass* Z_Construct_UClass_APaintball_TiltonGameMode_NoRegister()
	{
		return APaintball_TiltonGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_APaintball_TiltonGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Paintball_Tilton,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Paintball_TiltonGameMode.h" },
				{ "ModuleRelativePath", "Paintball_TiltonGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APaintball_TiltonGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APaintball_TiltonGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaintball_TiltonGameMode, 3502037806);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaintball_TiltonGameMode(Z_Construct_UClass_APaintball_TiltonGameMode, &APaintball_TiltonGameMode::StaticClass, TEXT("/Script/Paintball_Tilton"), TEXT("APaintball_TiltonGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaintball_TiltonGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
