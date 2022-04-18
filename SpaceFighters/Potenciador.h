// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Potenciador.generated.h"

UCLASS()
class SPACEFIGHTERS_API APotenciador : public AActor
{
	GENERATED_BODY()
	
private:
	int IncrementoDeDano;
	int IncrementoDeVida;
	int IncrementoDeVelocidad;
	int InicioDeUbicacionX;
	int InicioDeUbicacionY;

	//No tengo claro si estas funciones van en Potenciador o Nave
	void IncrementarVida();
	void IncrementarNivelDeDano();
	void IncrementarNivelDeMejora();
	void IncrementarVelocidad();

public:
	int UbicacionX;
	int UbicacionY;

	void Desaparecer();
	void Generarse();
	void Moverse();
public:	
	// Sets default values for this actor's properties
	APotenciador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
