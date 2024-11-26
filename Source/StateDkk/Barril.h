// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadoBarril.h"
#include "Barril.generated.h"

class UStaticMeshComponent;
class IEstadoBarril;
UCLASS()
class STATEDKK_API ABarril : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABarril();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UStaticMeshComponent* MeshBarril;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



private:
	//puntero al estado actual
	IEstadoBarril* EstadoActual;

	//Estados
	IEstadoBarril* EstadoReposo;	
	IEstadoBarril* EstadoRodando;

	//rango de deteccion
	float RangoDeteccion;

	//referencia al personaje
	class AStateDkkCharacter* Personaje;

	void inicializarEstado();
	void EstablecerEstado(IEstadoBarril* NuevoEstado);
	void reposar();
};
