// Copyright Epic Games, Inc. All Rights Reserved.

#include "StateDkkGameMode.h"
#include "StateDkkCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Fantasma.h"
#include "MuroTrampa.h"
#include "Barril.h"
#include "Plataforma.h"
#include "FabricaEnemigos.h"

AStateDkkGameMode::AStateDkkGameMode()
{
	// set default pawn class to our Blueprinted character
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// Inicializar variables
	CurrentEnemyIndex = 0;
	EnemiesPerType = 5; // 5 enemigos por tipo	
	InitialSpawnLocation = FVector(0.f, 0.f, 300.f);
	SpawnOffset = FVector(0.f, 200.f, 0.f); // Desplazamiento entre enemigos

	// Definir los tipos de enemigos
	EnemyTypes = { "Enemigo", "Enemigo2", "Enemigo3" };

}

void AStateDkkGameMode::BeginPlay()
{
	Super::BeginPlay();


	// Iniciar el temporizador para spawnear enemigos
	GetWorld()->GetTimerManager().SetTimer(SpawnTimerHandle, this, &AStateDkkGameMode::SpawnNextEnemy, 1.0f, true);


	//MuroTrampa
	Mtrampa = GetWorld()->SpawnActor<AMuroTrampa>(FVector(1200.0f, 1800.0f, 1350.0f), FRotator(0.0f, 0.0f, 0.0f));


	//spawn de fantasma
	
	fantasma = GetWorld()->SpawnActor<AFantasma>(FVector(1200.0f, -5000.0f, 300.0f), FRotator(0.0f, 0.0f, 0.0f));
	fantasma->InicializarFantasma(100);
	fantasma->Ataque(); 

	// Spawn the platforms

	FVector StartLocation(1200.0f, -500.0f, 100.0f); // Ubicación inicial
	FVector Offset(0.0f, 450.0f, 0.0f);        // Distancia entre plataformas
	int32 NumPlataformas = 10;

	SpawnPlataformas(GetWorld(), StartLocation, NumPlataformas, Offset);

	// Segunda fila de plataformas (más arriba y a la izquierda)
	FVector SecondRowStartLocation = StartLocation + FVector(0.0f, -200.0f, 800.0f); // Más a la izquierda y más arriba	
	SpawnPlataformas(GetWorld(), SecondRowStartLocation, NumPlataformas, Offset);	

	// Tercera fila de plataformas (aún más arriba y más a la izquierda)
	FVector ThirdRowStartLocation = SecondRowStartLocation + FVector(0.0f, 200.0f, 800.0f); // Más a la izquierda y más arriba	
	SpawnPlataformas(GetWorld(), ThirdRowStartLocation, NumPlataformas, Offset);

	/*FVector SpawnLocation = FVector(1200.0f, -500.0f, 200.0f);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);
	APlataforma* plataforma = GetWorld()->SpawnActor<APlataforma>(SpawnLocation, SpawnRotation);*/

	//spawnear barril
	ABarril* barril = GetWorld()->SpawnActor<ABarril>(FVector(1200.0f, -3000.0f, 300.0f), FRotator(90.0f, 0.0f, 0.0f));	
}

void AStateDkkGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Segundos += DeltaTime;
	if (Segundos >= 2)	
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Puntos de fantasma: %d"),fantasma->GetEnergia()));
	}
}

void AStateDkkGameMode::SpawnPlataformas(UWorld* World, FVector StartLocation, int32 Count, FVector Offset)
{
	if (!World)	
		return;	

	for (int32 i = 0; i < Count; ++i)	
	{
		FVector SpawnLocation = StartLocation + Offset * i; // Calcula la posición de cada plataforma	
		FActorSpawnParameters SpawnParams;	
		World->SpawnActor<APlataforma>(APlataforma::StaticClass(), SpawnLocation, FRotator::ZeroRotator, SpawnParams);	
	}
}

void AStateDkkGameMode::SpawnNextEnemy()
{	
	// Calcular el índice del tipo de enemigo y la posición dentro de la fila
	int32 EnemyTypeIndex = CurrentEnemyIndex / EnemiesPerType;	
	int32 EnemyPositionIndex = CurrentEnemyIndex % EnemiesPerType;		
		
	// Verificar si se han generado todos los enemigos
	if (EnemyTypeIndex >= EnemyTypes.Num())
	{
		// Detener el temporizador si todos los enemigos han sido generados
		GetWorld()->GetTimerManager().ClearTimer(SpawnTimerHandle);
		return;
	}
	// Calcular la posición para spawnear el enemigo
	FVector SpawnLocation = InitialSpawnLocation + EnemyTypeIndex * FVector(500.f, 0.f, 0.f) + EnemyPositionIndex * SpawnOffset;	

	// Spawnear el enemigo
	AFabricaEnemigos::CreateEnemy(GetWorld(), EnemyTypes[EnemyTypeIndex], SpawnLocation);	

	// Incrementar el contador
	CurrentEnemyIndex++;		
}
