// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IStateMovimiento.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIStateMovimiento : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class STATEDKK_API IIStateMovimiento
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void SetEnemigo(class AFantasma* enemigo) = 0;
	virtual  FString GetEstado() = 0;
	virtual void atacar() = 0;
	virtual void mover() = 0;
	virtual void Recuperacion() = 0;
	virtual void PerdidaEnergia() = 0;
};
