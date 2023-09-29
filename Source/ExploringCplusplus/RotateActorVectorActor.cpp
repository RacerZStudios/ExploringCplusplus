/*
// Zac Bogner // Level (Game) Designer // Motorsports Enthusiast // Unreal Engine // c++
*/


#include "RotateActorVectorActor.h"

// Sets default values
ARotateActorVectorActor::ARotateActorVectorActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	angleAxis = 0; 
}

// Called when the game starts or when spawned
void ARotateActorVectorActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotateActorVectorActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector newLocation = FVector(0, 0, 800); 
	FVector radius = FVector(200,0,0);
	angleAxis++; 

	if (angleAxis > 360)
	{
		angleAxis = 1; 
	}

	FVector rotation = radius.RotateAngleAxis(angleAxis, FVector(0, 0, 1)); 

	newLocation.X += rotation.X; 
	newLocation.Y += rotation.Y;
	newLocation.Z += rotation.Z;

	SetActorLocation(newLocation); 
}

