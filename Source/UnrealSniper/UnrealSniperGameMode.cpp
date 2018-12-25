// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "UnrealSniperGameMode.h"
#include "UnrealSniperHUD.h"
#include "UnrealSniperCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealSniperGameMode::AUnrealSniperGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUnrealSniperHUD::StaticClass();
}
