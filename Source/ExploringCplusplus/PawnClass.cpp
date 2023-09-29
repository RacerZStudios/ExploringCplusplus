/*
// Zac Bogner // Level (Game) Designer // Motorsports Enthusiast // Unreal Engine // Unity // c# // c++
*/


#include "PawnClass.h"
#include "Components/CapsuleComponent.h" 

// Sets default values
APawnClass::APawnClass()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

   // UCapsuleComponent* Capsule; 
	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule")); 
	Capsule->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void APawnClass::BeginPlay()
{
	Super::BeginPlay();

	if (myInt != 0)
	{
		return; 
	}

	if (myBool == true)
	{
		return; 
	}

	DeclareFunction(); 
	
}

// Called every frame
void APawnClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APawnClass::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APawnClass::DeclareFunction()
{
	
}