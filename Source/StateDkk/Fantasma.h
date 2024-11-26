// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "IStateMovimiento.h"
#include "Fantasma.generated.h"
UCLASS()
class STATEDKK_API AFantasma : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFantasma();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fantasma")
	USkeletalMeshComponent* FantasmaMesh;

private:
	IIStateMovimiento* EstadoInmovil;
	IIStateMovimiento* EstadoTrampa;
	IIStateMovimiento* Estado;
	int energia = 0;

public:
	void InicializarFantasma(int _energia);
	void EstablecerEstado(IIStateMovimiento* _estado);
	void Ataque();
	void Moverse();
	FORCEINLINE int GetEnergia() { return energia; }
	FORCEINLINE FString GetEstadoActual() { return "El estado actual del fantasma es " + Estado->GetEstado(); }
	FORCEINLINE IIStateMovimiento* GetEstadoInmovil() { return EstadoInmovil; }
	FORCEINLINE IIStateMovimiento* GetEstadoTrampa() { return EstadoTrampa; }
	FORCEINLINE void Recuperacion() { energia += 5; };
	FORCEINLINE void PerdidaEnergia() { energia -= 2; };
};
