// Fill out your copyright notice in the Description page of Project Settings.


#include "EstalactitasHielo.h"

// Sets default values
AEstalactitasHielo::AEstalactitasHielo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstalactitasHielo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstalactitasHielo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstalactitasHielo::implementar()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Emerald, FString::Printf(TEXT("El ladrillo de hielo tiene estalactitas de hielo")));
}

