// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MurosAbstractGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MUROSABSTRACT_API AMurosAbstractGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMurosAbstractGameModeBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void UseFactory(TSubclassOf<AActor> FactoryClass);
	
};
