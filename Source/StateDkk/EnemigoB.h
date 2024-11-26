// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemigoB.generated.h"
class UStaticMeshComponent;
UCLASS()
class STATEDKK_API AEnemigoB : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigoB();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UStaticMeshComponent* EnemigoB;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
