// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"

UCLASS()
class EXPLORINGCPLUSPLUS_API APlayerPawn : public APawn
{
	GENERATED_BODY()
		// APawnClass* PawnRefernce;

public:
	// Sets default values for this pawn's properties
	APlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//  UPROPERTY(VisibleAnywhere, BlueprintReadOnly); 
	// class UCapsuleComponent* Capsule; 
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
