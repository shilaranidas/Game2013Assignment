// Copyright Epic Games, Inc. All Rights Reserved.

#include "Assignment_Das_ShilaGameMode.h"
#include "Assignment_Das_ShilaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAssignment_Das_ShilaGameMode::AAssignment_Das_ShilaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
