// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaConcretaMuroFuego.h"
#include "LadrilloFuego.h"
#include "MorteroLava.h"

// Sets default values
AFabricaConcretaMuroFuego::AFabricaConcretaMuroFuego()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaConcretaMuroFuego::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaConcretaMuroFuego::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

IILadrillo* AFabricaConcretaMuroFuego::CrearLadrillo()
{
	return GetWorld()->SpawnActor<ALadrilloFuego>(ALadrilloFuego::StaticClass());
}

IIAtributo* AFabricaConcretaMuroFuego::CrearAtributo()
{
	return GetWorld()->SpawnActor<AMorteroLava>(AMorteroLava::StaticClass());
}



