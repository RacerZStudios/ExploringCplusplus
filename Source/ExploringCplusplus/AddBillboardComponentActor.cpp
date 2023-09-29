/*
// Zac Bogner // Level (Game) Designer // Motorsports Enthusiast // Unreal Engine // Unity // c# // c++ 
*/

#include "AddBillboardComponentActor.h"
#include "Components/BillboardComponent.h"

// Sets default values
AAddBillboardComponentActor::AAddBillboardComponentActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true; 

	billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT(" My Billboard Component"));

	billboard->SetHiddenInGame(false, true);

	RootComponent = billboard; 
}

// Called when the game starts or when spawned
void AAddBillboardComponentActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAddBillboardComponentActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}