// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoB.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AEnemigoB::AEnemigoB()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//mesh para enemigoB
	EnemigoB = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Enemigo"));
	RootComponent = EnemigoB;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> EnemigoAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	if (EnemigoAsset.Succeeded())
	{
		EnemigoB->SetStaticMesh(EnemigoAsset.Object);
	}
}

// Called when the game starts or when spawned
void AEnemigoB::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigoB::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

