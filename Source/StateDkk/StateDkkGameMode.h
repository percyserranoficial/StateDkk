// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "StateDkkGameMode.generated.h"

UCLASS(minimalapi)	
class AStateDkkGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AStateDkkGameMode();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	class AFantasma* fantasma;
	class AMuroTrampa* Mtrampa;
	float Segundos = 0;	


	void SpawnPlataformas(UWorld* World, FVector StartLocation, int32 Count, FVector Offset);


private:
    // Temporizador para spawnear enemigos
    FTimerHandle SpawnTimerHandle;

    // Contador de enemigos generados
    int32 CurrentEnemyIndex;

    // Lista de tipos de enemigos a spawnear
    TArray<FName> EnemyTypes;

    // Número de enemigos de cada tipo
    int32 EnemiesPerType;

    // Posición inicial para spawnear
    FVector InitialSpawnLocation;

    // Desplazamiento entre enemigos en la fila
    FVector SpawnOffset;

    void SpawnNextEnemy();
};



