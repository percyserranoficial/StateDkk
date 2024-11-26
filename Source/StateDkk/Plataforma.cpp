// Fill out your copyright notice in the Description page of Project Settings.


#include "Plataforma.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
APlataforma::APlataforma()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Geometry/StateAssets/DonkeyKong/Donkey_Kong_Level_1_Platform049.Donkey_Kong_Level_1_Platform049'"));
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetStaticMesh(MeshAsset.Object);
	RootComponent = MeshComp;

	MeshComp->SetWorldScale3D(FVector(4.0f, 4.5f, 3.0f));	


}

// Called when the game starts or when spawned
void APlataforma::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlataforma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

