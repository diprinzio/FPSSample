// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "FPSSample.h"
#include "FPSSampleGameMode.h"
#include "FPSSampleHUD.h"
#include "FPSSampleCharacter.h"

AFPSSampleGameMode::AFPSSampleGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSSampleHUD::StaticClass();
}
