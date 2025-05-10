// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "ILadrillo.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LadrilloHielo.generated.h"

UCLASS()
class MUROSABSTRACT_API ALadrilloHielo : public AActor, public IILadrillo
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALadrilloHielo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void crear() override;

};
