/*
// Zac Bogner // Level (Game) Designer // Motorsports Enthusiast // Unreal Engine // c++
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Player_BP.generated.h"

UCLASS()
class EXPLORINGCPLUSPLUS_API APlayer_BP : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayer_BP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
