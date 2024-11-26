// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AEnemigo::AEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//mesh para enemigo
	Enemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Enemigo"));
	RootComponent = Enemigo;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> EnemigoAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (EnemigoAsset.Succeeded())
	{
		Enemigo->SetStaticMesh(EnemigoAsset.Object);
	}
}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

