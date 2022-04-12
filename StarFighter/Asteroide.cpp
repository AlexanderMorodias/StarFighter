// Fill out your copyright notice in the Description page of Project Settings.


#include "Asteroide.h"

void AAsteroide::Explotar()
{
}

void AAsteroide::Destruir()
{
}

// Sets default values
AAsteroide::AAsteroide()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAsteroide::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAsteroide::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

