// Copyright Epic Games, Inc. All Rights Reserved.


#include "MurosAbstractGameModeBase.h"
#include "FabricaConcretaMuroFuego.h"
#include "FabricaConcretaMuroHielo.h"
#include "IAbstractFactoryMuros.h"

AMurosAbstractGameModeBase::AMurosAbstractGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMurosAbstractGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	UseFactory(AFabricaConcretaMuroFuego::StaticClass());
	UseFactory(AFabricaConcretaMuroHielo::StaticClass());
}

void AMurosAbstractGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMurosAbstractGameModeBase::UseFactory(TSubclassOf<AActor> FactoryClass)
{
	auto Factory = GetWorld()->SpawnActor<IIAbstractFactoryMuros>(FactoryClass);
	auto ladrillo = Factory->CrearLadrillo();
	ladrillo->crear();
	auto atributo = Factory->CrearAtributo();
	atributo->implementar();
}
