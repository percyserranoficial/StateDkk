// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoInmovil.h"
#include "Kismet/GameplayStatics.h"
#include "Fantasma.h"

// Sets default values
AEstadoInmovil::AEstadoInmovil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoInmovil::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoInmovil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoInmovil::SetEnemigo(AFantasma* _enemigo)
{
	fantasma = _enemigo;
}

FString AEstadoInmovil::GetEstado()
{
	return "El fantasma esta en modo inmovil";
}

void AEstadoInmovil::atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,FString::Printf( TEXT("El fantasma esta en modo inmovil")));
	GetWorld()->GetTimerManager().SetTimer(energia, this, &AEstadoInmovil::Recuperacion, 1.0f, true);	
}

void AEstadoInmovil::mover()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,FString::Printf( TEXT("El fantasma esta oculto en modo inmovil")));	
	GetWorld()->GetTimerManager().SetTimer(energia, this, &AEstadoInmovil::Recuperacion, 1.0f, true);	
}

void AEstadoInmovil::Recuperacion()
{
	if(fantasma->GetEnergia()<=100)
	{
		fantasma->Recuperacion();
	}
	else
	{
		GetWorld()->GetTimerManager().ClearTimer(energia);	
		fantasma->EstablecerEstado(fantasma->GetEstadoTrampa());
	}
}


