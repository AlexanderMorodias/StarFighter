// Fill out your copyright notice in the Description page of Project Settings.


#include "Nave.h"

void ANave::Disparar()
{
}

void ANave::Explotar()
{
}

void ANave::Movimiento()
{
}

void ANave::Reaparecer()
{
}

// Sets default values
ANave::ANave()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANave::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANave::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ANave::IncrementarVida()
{
}

void ANave::IncrementarNivelDeDano()
{
}

void ANave::IncrementarNivelDeMejora()
{
}

void ANave::IncrementarVelocidad()
{
}
