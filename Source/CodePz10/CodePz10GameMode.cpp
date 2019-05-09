// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "CodePz10GameMode.h"
#include "CodePz10PlayerController.h"
#include "CodePz10Character.h"
#include "UObject/ConstructorHelpers.h"

ACodePz10GameMode::ACodePz10GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACodePz10PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}