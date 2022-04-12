// Fill out your copyright notice in the Description page of Project Settings.


#include "Bala.h"

void ABala::IncrementarVelocidad()
{
}

void ABala::IncrementarVelocidad(int _IncrementoVelocidad)
{
}

void ABala::IniciarDisparo()
{
}

void ABala::Impactar()
{
}

// Sets default values
ABala::ABala()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABala::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABala::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

