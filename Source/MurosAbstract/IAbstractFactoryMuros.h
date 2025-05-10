// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "ILadrillo.h"
#include "IAtributo.h"
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IAbstractFactoryMuros.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIAbstractFactoryMuros : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class MUROSABSTRACT_API IIAbstractFactoryMuros
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual IILadrillo* CrearLadrillo() = 0;
	virtual IIAtributo* CrearAtributo() = 0;
};
