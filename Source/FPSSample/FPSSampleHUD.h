// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "FPSSampleHUD.generated.h"

UCLASS()
class AFPSSampleHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFPSSampleHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

