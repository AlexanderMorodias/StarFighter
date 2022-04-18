// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bala.generated.h"

UCLASS()
class SPACEFIGHTERS_API ABala : public AActor
{
	GENERATED_BODY()
	
private:
	int Velocidad;
	int DistanciaMaxima;
	int Tamano;
	int UbicacionIncioX;
	int UbicacionInicioY;
	int NivelDano;

	void IncrementarVelocidad();
	void IncrementarVelocidad(int _IncrementoVelocidad);

public:
	int UbicacionX;
	int UbicacionY;

	void IniciarDisparo();
	void Impactar();
public:	
	// Sets default values for this actor's properties
	ABala();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
