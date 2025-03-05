// Copyright Epic Games, Inc. All Rights Reserved.

#include "AimTrainerGameMode.h"
#include "AimTrainerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAimTrainerGameMode::AAimTrainerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
