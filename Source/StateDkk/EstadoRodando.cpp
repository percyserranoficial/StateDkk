// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoRodando.h"
#include "EstadoBarril.h"
#include "Barril.h"

// Sets default values
AEstadoRodando::AEstadoRodando()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoRodando::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoRodando::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AEstadoRodando::desactivo(ABarril* _barril)
{

}

void AEstadoRodando::rodar(ABarril* _barril, float DeltaTime)
{
}

FString AEstadoRodando::GetEstadoBarril()
{
	return "El barril esta rodando";
}

void AEstadoRodando::SetBarril(ABarril* _Barril)
{
		Barril = _Barril;
		PosicionInicial = Barril->GetActorLocation();
		LimiteInicial = PosicionInicial + FVector(0, 2000, 0);
		LimiteFinal = PosicionInicial + FVector(0, -2000, 0);
}
