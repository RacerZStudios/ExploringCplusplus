/*
// Zac Bogner // Level (Game) Designer // Motorsports Enthusiast // Unreal Engine // Unity // c# // c++
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CreateStaticMeshActor.generated.h"

UCLASS()
class EXPLORINGCPLUSPLUS_API ACreateStaticMeshActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACreateStaticMeshActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere) // in public modifier, enable properties to be visible anywhere 
		UStaticMeshComponent* myMesh; // Get reference to static mesh actor, using pointer accessor of mesh type
};
