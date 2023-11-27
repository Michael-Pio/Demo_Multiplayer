// Copyright Epic Games, Inc. All Rights Reserved.

#include "Demo_multiplayerGameMode.h"
#include "Demo_multiplayerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADemo_multiplayerGameMode::ADemo_multiplayerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
