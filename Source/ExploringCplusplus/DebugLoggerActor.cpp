/*
// Zac Bogner // Level (Game) Designer // Motorsports Enthusiast // Unreal Engine // Unity // c# // c++
*/

#define print(text) if(GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::White, text);
#include "DebugLoggerActor.h"


// Sets default values
ADebugLoggerActor::ADebugLoggerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADebugLoggerActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("I just started running")); 

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Cyan, TEXT("Screen Message")); 
	}

	print("Print Message"); 

	// Vector structs 
	FVector myVector = FVector(100, 500, 700); 

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, FString::Printf(TEXT("My Vector = % "), *myVector.ToString()));
	}
}

// Called every frame
void ADebugLoggerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}