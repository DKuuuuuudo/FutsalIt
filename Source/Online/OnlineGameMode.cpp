// Copyright Epic Games, Inc. All Rights Reserved.

#include "OnlineGameMode.h"
#include "OnlineCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOnlineGameMode::AOnlineGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
