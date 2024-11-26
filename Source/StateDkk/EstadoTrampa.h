// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IStateMovimiento.h"
#include "EstadoTrampa.generated.h"
UCLASS()
class STATEDKK_API AEstadoTrampa : public AActor, public IIStateMovimiento 
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoTrampa();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	class AFantasma* fantasma;
	FVector PosicionInicial;
	FVector LimiteInicial;
	FVector LimiteFinal;
	FVector PosicionActual;
	FRotator Mirar;

	float Tiempo;
	float Incremento;
	bool Vigilar;	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetEnemigo(class AFantasma* _enemigo) override;	
	FString GetEstado() override;		
	void atacar() override;	
	void mover() override;	
	void Recuperacion() override {};
	void PerdidaEnergia() override;

	FTimerHandle Ataque;
	APawn* Mario;
};
