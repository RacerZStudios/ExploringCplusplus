/*
// Zac Bogner // Level (Game) Designer // Motorsports Enthusiast // Unreal Engine // Unity // c# // c++
*/


#include "CreateStaticMeshActor.h"

// Sets default values
ACreateStaticMeshActor::ACreateStaticMeshActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Set mesh object when initialized
	myMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Mesh Component"));
}

// Called when the game starts or when spawned
void ACreateStaticMeshActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACreateStaticMeshActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

