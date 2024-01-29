// Copyright Epic Games, Inc. All Rights Reserved.

#include "MOOC_MenuSystemGameMode.h"
#include "MOOC_MenuSystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMOOC_MenuSystemGameMode::AMOOC_MenuSystemGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
