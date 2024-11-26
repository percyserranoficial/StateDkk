// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoTrampa.h"
#include "Fantasma.h"
#include "Kismet/GamePlayStatics.h"

// Sets default values
AEstadoTrampa::AEstadoTrampa()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoTrampa::BeginPlay()
{
	Super::BeginPlay();
	Mario = UGameplayStatics::GetPlayerPawn(this, 0);	
	Vigilar = true;
	Incremento = 3.0f;
	Tiempo = 0.0f;
}

// Called every frame
void AEstadoTrampa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Tiempo += DeltaTime;
	if (Tiempo >= 1) {
		PerdidaEnergia();
		Tiempo = 0;
	}
}

void AEstadoTrampa::SetEnemigo(AFantasma* _enemigo)
{
	fantasma = _enemigo;	
	PosicionInicial = fantasma->GetActorLocation();	
	LimiteInicial = PosicionInicial + FVector(0, 2000, 0);	
	LimiteFinal = PosicionInicial + FVector(0, -2000, 0);	
}

FString AEstadoTrampa::GetEstado()
{
	return "El fantasma te persigue ";
}

void AEstadoTrampa::atacar()
{
	if (Mario)
	{
		FVector Direccion = (Mario->GetActorLocation() - fantasma->GetActorLocation()).GetSafeNormal();		
		FVector Posicion = fantasma->GetActorLocation() + (Direccion * 30.0f);	
		fantasma->SetActorLocation(Posicion);	
		FRotator Rotacion = Direccion.Rotation();	
		Rotacion.Pitch = 0.0f;	
		Rotacion.Roll = 0.0f;	
		Rotacion.Yaw > 0 ? Rotacion.Yaw = 0 : Rotacion.Yaw = 180;		
		fantasma->SetActorRotation(Rotacion);	
		GetWorld()->GetTimerManager().SetTimer(Ataque, this, &AEstadoTrampa::atacar, 0.009f, true);			
	}
	if (Mario)
	{
		FVector JugadorPosicion = Mario->GetActorLocation();	
		FVector PosicionEnemigo = fantasma->GetActorLocation();	
		float Distancia = FVector::Dist(PosicionEnemigo, JugadorPosicion);	
		if (Distancia > 1500.f) mover();
	}
}

void AEstadoTrampa::mover()
{
	PosicionActual = fantasma->GetActorLocation();	
	Mirar = fantasma->GetActorRotation();	
	if (Vigilar)	
	{
		if (PosicionActual.Y <= LimiteInicial.Y) {	
			PosicionActual.Y += Incremento;	
			Mirar.Yaw = 0;	
		}
		else Vigilar = false;
	}
	else
	{
		if (PosicionActual.Y >= LimiteFinal.Y) {	
			PosicionActual.Y -= Incremento;	
			Mirar.Yaw = 180;
		}
		else Vigilar = true;
	}
	fantasma->SetActorLocation(PosicionActual);
	fantasma->SetActorRotation(Mirar);
	GetWorld()->GetTimerManager().SetTimer(Ataque, this, &AEstadoTrampa::mover, 0.001f, true);
	if (Mario) {
		FVector JugadorPosicion = Mario->GetActorLocation();
		FVector PosicionEnemigo = fantasma->GetActorLocation();
		float Distancia = FVector::Dist(PosicionEnemigo, JugadorPosicion);
		if (Distancia < 1500.f) atacar();	
	}
}

void AEstadoTrampa::PerdidaEnergia()
{
	if (fantasma->GetEnergia() >= 10)
	{
		fantasma->PerdidaEnergia();
	}
	else
	{
		GetWorld()->GetTimerManager().ClearTimer(Ataque);	
		fantasma->EstablecerEstado(fantasma->GetEstadoInmovil());	
	}
}



