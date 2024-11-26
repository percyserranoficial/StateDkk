// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MuroTrampa.generated.h"
class USphereComponent;
UCLASS()
class STATEDKK_API AMuroTrampa : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMuroTrampa();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UStaticMeshComponent* MuroTrampaMesh;	

	//componente de colision para el rango
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Rango")		
	USphereComponent* RangoDeteccion;	

	//funcion llamada cuando algo entra en el rango de deteccion
	UFUNCTION()	
	void OnRangoBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);	
};
