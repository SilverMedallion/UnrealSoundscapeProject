// Copyright Epic Games, Inc. All Rights Reserved.

#include "AudioHonoursGameMode.h"
#include "AudioHonoursCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAudioHonoursGameMode::AAudioHonoursGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
