// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaConcretaMuroHielo.h"
#include "LadrilloHielo.h"
#include "EstalactitasHielo.h"

// Sets default values
AFabricaConcretaMuroHielo::AFabricaConcretaMuroHielo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaConcretaMuroHielo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaConcretaMuroHielo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

IILadrillo* AFabricaConcretaMuroHielo::CrearLadrillo()
{
	return GetWorld()->SpawnActor<ALadrilloHielo>(ALadrilloHielo::StaticClass());
}

IIAtributo* AFabricaConcretaMuroHielo::CrearAtributo()
{
	return GetWorld()->SpawnActor<AEstalactitasHielo>(AEstalactitasHielo::StaticClass());
}

