// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadoBarril.h"
#include "EstadoRodando.generated.h"
UCLASS()
class STATEDKK_API AEstadoRodando : public AActor, public IEstadoBarril
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AEstadoRodando();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	class ABarril* Barril;

	FVector PosicionInicial;
	FVector LimiteInicial;	
	FVector LimiteFinal;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void desactivo(ABarril* Barril) override;
	void rodar(ABarril* _Barril, float DeltaTime) override;
	FString GetEstadoBarril() override;
	void SetBarril(ABarril* _Barril) override;
};
