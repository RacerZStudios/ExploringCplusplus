/*
// Zac Bogner // Level (Game) Designer // Motorsports Enthusiast // Unreal Engine // c++ 
*/


#include "FindPlayerActor.h"

// Sets default values
AFindPlayerActor::AFindPlayerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFindPlayerActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFindPlayerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector MyPlayer = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation(); 

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Orange, FString::Printf(TEXT("My Player Location is: %s"), *MyPlayer.ToString())); 
	}
}