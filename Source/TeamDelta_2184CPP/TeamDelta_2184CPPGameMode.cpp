// Copyright Epic Games, Inc. All Rights Reserved.

#include "TeamDelta_2184CPPGameMode.h"
#include "TeamDelta_2184CPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATeamDelta_2184CPPGameMode::ATeamDelta_2184CPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
