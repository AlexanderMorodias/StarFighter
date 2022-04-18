// Fill out your copyright notice in the Description page of Project Settings.


#include "NavePlayerController.h"
#include "Kismet/GamePlayStatics.h"
#include "Camera/CameraActor.h"

#include "Nave.h"

ANavePlayerController::ANavePlayerController()
{
}

void ANavePlayerController::SetupInputComponent()
{
	//Aqui se accede a la clase padre Para el llamar al constructor
	Super::SetupInputComponent();

	EnableInput(this);
	

	InputComponent->BindAxis("MoveX", this, &ANavePlayerController::MoveX);

	InputComponent->BindAxis("MoveZ", this, &ANavePlayerController::MoveZ);
	
}

void ANavePlayerController::BeginPlay()
{
	//Se Crea un Array dinamico para recibir los parametros y almacemarlos en CameraActors
	TArray<AActor*> CameraActors;

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), CameraActors);

	FViewTargetTransitionParams Params;
	//Se establece los parametros del Array y parametros de transicion
	SetViewTarget(CameraActors[0], Params);

}


void ANavePlayerController::MoveX(float _AxisValueX)
{

	auto MyPawn = Cast<ANave>(GetPawn());


	if (MyPawn) {
		MyPawn->MoveX(_AxisValueX);
	}
}

void ANavePlayerController::MoveZ(float _AxisValueZ)
{

	auto MyPawn = Cast<ANave>(GetPawn());


	if (MyPawn) {
		MyPawn->MoveZ(_AxisValueZ);
	}
}
