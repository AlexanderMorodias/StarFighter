// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.generated.h"

UCLASS()
class SPACEFIGHTERS_API AEnemigo : public AActor
{
	GENERATED_BODY()
private:
	int Tamano;
	int NivelDano;
	int UbicacionInicialX;
	int UbicacionInicialY;
	int Velocidad;


public:
	int UbicacionX;
	int UbicacionY;

	void IniciarDisparo();
	void Impactar();
	
public:	
	// Sets default values for this actor's properties
	AEnemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
