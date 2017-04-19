// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TrevorProject.h"
#include "TrevorProjectGameMode.h"
#include "TrevorProjectHUD.h"
#include "TrevorProjectCharacter.h"

ATrevorProjectGameMode::ATrevorProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATrevorProjectHUD::StaticClass();
}
