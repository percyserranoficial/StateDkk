// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoReposo.h"
#include "EstadoBarril.h"
#include "Barril.h"

// Sets default values
AEstadoReposo::AEstadoReposo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoReposo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoReposo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoReposo::SetBarril(ABarril* _Barril)	
{
	barril = _Barril;
}

FString AEstadoReposo::GetEstadoBarril()		
{
	return "El barril esta en modo reposo";
}

void AEstadoReposo::desactivo(ABarril* Barril)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green,FString::Printf( TEXT("El barril esta en reposo")));	

}

void AEstadoReposo::rodar(ABarril* Barril, float DeltaTime)	
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("El barril esta en reposo")));
}





