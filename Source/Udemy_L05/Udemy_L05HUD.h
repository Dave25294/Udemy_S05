// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Udemy_L05HUD.generated.h"

UCLASS()
class AUdemy_L05HUD : public AHUD
{
	GENERATED_BODY()

public:
	AUdemy_L05HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

