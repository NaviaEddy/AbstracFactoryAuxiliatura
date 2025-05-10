// Fill out your copyright notice in the Description page of Project Settings.


#include "LadrilloFuego.h"

// Sets default values
ALadrilloFuego::ALadrilloFuego()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALadrilloFuego::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALadrilloFuego::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALadrilloFuego::crear()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("Se creo un ladrillo de fuego")));
}

