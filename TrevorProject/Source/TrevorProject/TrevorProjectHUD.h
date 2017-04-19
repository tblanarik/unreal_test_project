// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "TrevorProjectHUD.generated.h"

UCLASS()
class ATrevorProjectHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATrevorProjectHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

