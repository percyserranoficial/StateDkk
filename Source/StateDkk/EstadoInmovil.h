// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IStateMovimiento.h"
#include "EstadoInmovil.generated.h"
UCLASS()
class STATEDKK_API AEstadoInmovil : public AActor, public IIStateMovimiento
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoInmovil();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	class AFantasma* fantasma;
	FTimerHandle energia;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetEnemigo(class AFantasma* _enemigo) override;
	FString GetEstado() override;
	void atacar() override;
	void mover() override;
	void Recuperacion() override;
	void PerdidaEnergia() override {} ;
};
