// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IAtributo.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstalactitasHielo.generated.h"

UCLASS()
class MUROSABSTRACT_API AEstalactitasHielo : public AActor, public IIAtributo
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstalactitasHielo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void implementar() override;
};
