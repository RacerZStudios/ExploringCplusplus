/*
// Zac Bogner // Level (Game) Designer // Motorsports Enthusiast // Unreal Engine // c++
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotateActorVectorActor.generated.h"

UCLASS()
class EXPLORINGCPLUSPLUS_API ARotateActorVectorActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotateActorVectorActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float angleAxis; 
};
