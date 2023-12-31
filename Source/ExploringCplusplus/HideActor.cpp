/*
// Zac Bogner // Level (Game) Designer // Motorsports Enthusiast // Unreal Engine // c++
*/


#include "HideActor.h"

// Sets default values
AHideActor::AHideActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHideActor::BeginPlay()
{
	Super::BeginPlay();
	if (hideInGame)
	{
		DisableActor(); 
	}
}

// Called every frame
void AHideActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHideActor::DisableActor()
{
	SetActorHiddenInGame(true); 
	SetActorEnableCollision(false); 
	SetActorTickEnabled(false); 
}