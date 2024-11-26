// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroTrampa.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"

// Sets default values
AMuroTrampa::AMuroTrampa()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MuroTrampaMeshAsset(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));	
	MuroTrampaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MuroTrampaMesh"));		
	if (MuroTrampaMeshAsset.Succeeded())	
	{		
		MuroTrampaMesh->SetStaticMesh(MuroTrampaMeshAsset.Object);		
	}	
	RootComponent = MuroTrampaMesh;


	// Crear el componente de colisión
	RangoDeteccion = CreateDefaultSubobject<USphereComponent>(TEXT("RangoDeteccion"));
	RangoDeteccion->SetupAttachment(RootComponent); // Adjuntar al actor
	RangoDeteccion->InitSphereRadius(300.0f);       // Establecer radio del rango
	RangoDeteccion->SetCollisionProfileName(TEXT("Trigger")); // Configurar como trigger

	//escala
	MuroTrampaMesh->SetWorldScale3D(FVector(2.5f, 2.5f, 2.5f));			
}

// Called when the game starts or when spawned
void AMuroTrampa::BeginPlay()
{
	Super::BeginPlay();
	
	// Suscribirse al evento OnComponentBeginOverlap
	if (RangoDeteccion)	
	{
		RangoDeteccion->OnComponentBeginOverlap.AddDynamic(this, &AMuroTrampa::OnRangoBeginOverlap);	
	}
}

// Called every frame
void AMuroTrampa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMuroTrampa::OnRangoBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Verificar que no sea el propio actor
	if (OtherActor && OtherActor != this)
	{
		//mensaje que deci que entraste al rango del muro
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Entraste al rango del muro trampa"));	
		MuroTrampaMesh->SetSimulatePhysics(true);	
	}
}