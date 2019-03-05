// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Paintball_TiltonGameMode.h"
#include "Paintball_TiltonHUD.h"
#include "Paintball_TiltonCharacter.h"
#include "UObject/ConstructorHelpers.h"

APaintball_TiltonGameMode::APaintball_TiltonGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APaintball_TiltonHUD::StaticClass();
}
