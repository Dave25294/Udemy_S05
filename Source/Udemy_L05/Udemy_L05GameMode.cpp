// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Udemy_L05GameMode.h"
#include "Udemy_L05HUD.h"
#include "Udemy_L05Character.h"
#include "UObject/ConstructorHelpers.h"

AUdemy_L05GameMode::AUdemy_L05GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUdemy_L05HUD::StaticClass();
}
