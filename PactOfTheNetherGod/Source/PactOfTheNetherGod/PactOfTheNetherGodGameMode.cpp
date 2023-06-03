// Copyright Epic Games, Inc. All Rights Reserved.

#include "PactOfTheNetherGodGameMode.h"
#include "PactOfTheNetherGodCharacter.h"
#include "UObject/ConstructorHelpers.h"

APactOfTheNetherGodGameMode::APactOfTheNetherGodGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
