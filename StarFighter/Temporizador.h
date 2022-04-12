// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Temporizador.generated.h"

UCLASS()
class STARFIGHTER_API ATemporizador : public AActor
{
	GENERATED_BODY()
private:
	int PuntajeInicial;

	void GrabarRecord();
public:
	int Record;


	void MostrarUltimoRecord();
	
public:	
	// Sets default values for this actor's properties
	ATemporizador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
