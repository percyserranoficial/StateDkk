// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoC.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AEnemigoC::AEnemigoC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//mesh para enemigoC
	EnemigoC = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Enemigo"));
	RootComponent = EnemigoC;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> EnemigoAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	if (EnemigoAsset.Succeeded())
	{
		EnemigoC->SetStaticMesh(EnemigoAsset.Object);
	}
}

// Called when the game starts or when spawned
void AEnemigoC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigoC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

