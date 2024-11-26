// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaEnemigos.h"
#include "Engine/World.h"
#include "Enemigo.h"
#include "Enemigo1.h"
#include "Enemigo2.h"
#include "Enemigo3.h"

TMap<FName, TSubclassOf<AEnemigo>> AFabricaEnemigos::EnemigoClases;	
// Sets default values

AFabricaEnemigos::AFabricaEnemigos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaEnemigos::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaEnemigos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AEnemigo* AFabricaEnemigos::CreateEnemy(UWorld* World, FName EnemyTipo, FVector SpawnLocation)
{

	InicializarFabrica();

	if (EnemigoClases.Contains(EnemyTipo))
	{
		return World->SpawnActor<AEnemigo>(EnemigoClases[EnemyTipo], SpawnLocation, FRotator::ZeroRotator);
	}

	return nullptr;
}

void AFabricaEnemigos::InicializarFabrica()
{
	if (EnemigoClases.Num() == 0)
	{
		EnemigoClases.Add("Enemy1", AEnemigo1::StaticClass());
		EnemigoClases.Add("Enemy2", AEnemigo2::StaticClass());
		EnemigoClases.Add("Enemy3", AEnemigo3::StaticClass());
	}
}



