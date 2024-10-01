// Copyright Epic Games, Inc. All Rights Reserved.

#include "LuxusSpaceLinerGameMode.h"
#include "LuxusSpaceLinerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALuxusSpaceLinerGameMode::ALuxusSpaceLinerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
