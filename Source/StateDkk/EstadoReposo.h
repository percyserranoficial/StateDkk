// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadoBarril.h"
#include "EstadoReposo.generated.h"

UCLASS()
class STATEDKK_API AEstadoReposo : public AActor, public IEstadoBarril
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEstadoReposo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	class ABarril* barril;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void desactivo(ABarril* Barril) override;
	void rodar(ABarril* _Barril, float DeltaTime) override;
	FString GetEstadoBarril() override;
	void SetBarril(ABarril* _Barril) override;
};