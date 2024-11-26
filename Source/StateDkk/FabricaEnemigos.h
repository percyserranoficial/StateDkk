// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FabricaEnemigos.generated.h"
class AEnemigo;
UCLASS()
class STATEDKK_API AFabricaEnemigos : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabricaEnemigos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	static AEnemigo* CreateEnemy(UWorld* World, FName EnemyTipo, FVector SpawnLocation);

private:
	static TMap<FName, TSubclassOf<AEnemigo>> EnemigoClases;

	static void InicializarFabrica();
};
