// Fill out your copyright notice in the Description page of Project Settings.


#include "Barril.h"
//#include "Components/StaticMeshComponent.h"
#include "EstadoReposo.h"
#include "EstadoRodando.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABarril::ABarril()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	////crear el static mesh component
	MeshBarril = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshBarril"));	
	RootComponent = MeshBarril;		

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BarrilAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
	if (BarrilAsset.Succeeded())	
	{
		MeshBarril->SetStaticMesh(BarrilAsset.Object);		
	}

	//inicializar estados
	EstadoReposo = CreateDefaultSubobject<AEstadoReposo>(TEXT("EstadoReposo"));
	EstadoRodando = CreateDefaultSubobject<AEstadoRodando>(TEXT("EstadoRodando"));	
	EstadoActual = EstadoReposo;

	//rango de deteccion
	RangoDeteccion = 200.0f;	
}

// Called when the game starts or when spawned
void ABarril::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABarril::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Obtener la referencia al personaje llamado 'Character'
	ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);	

	if (PlayerCharacter)
	{
		// Obtener la ubicación del personaje
		FVector UbicacionJugador = PlayerCharacter->GetActorLocation();
		UE_LOG(LogTemp, Warning, TEXT("Ubicación de 'Character': X=%f, Y=%f, Z=%f"), UbicacionJugador.X, UbicacionJugador.Y, UbicacionJugador.Z);
	}
}

void ABarril::inicializarEstado()
{
	EstadoActual = EstadoReposo;
}

void ABarril::EstablecerEstado(IEstadoBarril* NuevoEstado)
{
	EstadoActual = NuevoEstado;	
	reposar();
}

void ABarril::reposar()
{
	//if(EstadoActual) EstadoActual->rodar();
}


