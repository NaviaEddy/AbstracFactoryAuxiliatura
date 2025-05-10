// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "IAbstractFactoryMuros.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FabricaConcretaMuroFuego.generated.h"

UCLASS()
class MUROSABSTRACT_API AFabricaConcretaMuroFuego : public AActor,
	public IIAbstractFactoryMuros
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaConcretaMuroFuego();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	IILadrillo* CrearLadrillo() override;
	IIAtributo* CrearAtributo() override;

};
