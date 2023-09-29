/*
// Zac Bogner // Level (Game) Designer // Motorsports Enthusiast // Unreal Engine // Unity // c# // c++
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DebugLoggerActor.generated.h"

UCLASS()
class EXPLORINGCPLUSPLUS_API ADebugLoggerActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADebugLoggerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
