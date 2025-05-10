// Fill out your copyright notice in the Description page of Project Settings.


#include "LadrilloHielo.h"

// Sets default values
ALadrilloHielo::ALadrilloHielo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALadrilloHielo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALadrilloHielo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALadrilloHielo::crear()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Emerald, FString::Printf(TEXT("Se creo un ladrillo de hielo")));
}

