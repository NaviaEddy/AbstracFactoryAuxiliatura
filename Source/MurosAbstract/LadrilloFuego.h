// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "ILadrillo.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LadrilloFuego.generated.h"

UCLASS()
class MUROSABSTRACT_API ALadrilloFuego : public AActor, 
	public IILadrillo 
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALadrilloFuego();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void crear() override;

};
