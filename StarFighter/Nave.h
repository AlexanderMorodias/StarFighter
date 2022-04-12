// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Nave.generated.h"

UCLASS()
class STARFIGHTER_API ANave : public APawn
{
	GENERATED_BODY()

private:
	int UbicacionDeInicioX;
	int UbicacionDeInicioY;
	int Tamano;
	int Velocidad;

	//No tengo claro si estas funciones van en Potenciador o Nave
	void IncrementarVida();
	void IncrementarNivelDeDano();
	void IncrementarNivelDeMejora();
	void IncrementarVelocidad();
public:
	
public:

	int Vida;
	int NivelDeDano;
	int NivelDeMejora;
	int UbicacionX;
	int UbicacionY;


	void Disparar();
	void Explotar();
	void Movimiento();
	void Reaparecer();
	// Sets default values for this pawn's properties
	ANave();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
