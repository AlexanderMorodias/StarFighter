// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Menu.generated.h"

UCLASS()
class SPACEFIGHTERS_API AMenu : public AActor
{
	GENERATED_BODY()
private:
	int Tamano;
	int Alto;
	int Ancho;

public:


	void PausarJuego();

public:	
	// Sets default values for this actor's properties
	AMenu();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
