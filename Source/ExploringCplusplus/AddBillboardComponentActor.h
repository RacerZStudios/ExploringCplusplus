/*
// Zac Bogner // Level (Game) Designer // Motorsports Enthusiast // Unreal Engine // Unity // c# // c++
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AddBillboardComponentActor.generated.h"

UCLASS()
class EXPLORINGCPLUSPLUS_API AAddBillboardComponentActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAddBillboardComponentActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere); 
	class UBillboardComponent* billboard; 
};
