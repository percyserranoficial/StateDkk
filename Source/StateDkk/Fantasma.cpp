// Fill out your copyright notice in the Description page of Project Settings.


#include "Fantasma.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "EstadoInmovil.h"
#include "EstadoTrampa.h"

// Sets default values
AFantasma::AFantasma()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FantasmaMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FantasmaMesh"));	
	ConstructorHelpers::FObjectFinder<USkeletalMesh> FantasmaMeshAsset(TEXT("SkeletalMesh'/Game/Mannequin/Character/Mesh/SK_Mannequin.SK_Mannequin'"));	
	if (FantasmaMeshAsset.Succeeded())	
	{		
		FantasmaMesh->SetSkeletalMesh(FantasmaMeshAsset.Object);		
	}	
	FantasmaMesh->SetupAttachment(RootComponent);	
	//FantasmaMesh->SetRelativeLocation(FVector(0.0f, 0.0f, -90.0f));	

	//FantasmaMesh->SetSimulatePhysics(true);	
}

// Called when the game starts or when spawned
void AFantasma::BeginPlay()
{
	Super::BeginPlay();
	
	EstadoInmovil = GetWorld()->SpawnActor<AEstadoInmovil>(AEstadoInmovil::StaticClass());
	EstadoInmovil->SetEnemigo(this);
	EstadoTrampa = GetWorld()->SpawnActor<AEstadoTrampa>(AEstadoTrampa::StaticClass());		
	EstadoTrampa->SetEnemigo(this);	
}

// Called every frame
void AFantasma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFantasma::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AFantasma::InicializarFantasma(int _energia)
{
	energia = _energia;
	energia >= 35 ? Estado = EstadoTrampa : Estado = EstadoInmovil;		
}

void AFantasma::EstablecerEstado(IIStateMovimiento* _estado)
{
		Estado = _estado;	
		Ataque();
}

void AFantasma::Ataque()
{
	if(Estado) Estado->atacar();
}

void AFantasma::Moverse()
{
	if(Estado) Estado->mover();
}

