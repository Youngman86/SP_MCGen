// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MCGenGameMode.h"
#include "MCGenHUD.h"
#include "MCGenCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMCGenGameMode::AMCGenGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMCGenHUD::StaticClass();
}
