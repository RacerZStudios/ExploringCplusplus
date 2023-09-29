/*
// Zac Bogner // Level (Game) Designer // Motorsports Enthusiast // Unreal Engine // Unity // c# // c++
*/

// include library's for reference of properties/ components
#include "Components/StaticMeshComponent.h"
#include "AddMeshFromFileActor.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AAddMeshFromFileActor::AAddMeshFromFileActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	UStaticMeshComponent* Cyliner = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Cyliner")); 
	Cyliner->SetupAttachment(RootComponent); 

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CylinderAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder"));

	if (CylinderAsset.Succeeded())
	{
		// Set Cylinder if succeeded 
		Cyliner->SetStaticMesh(CylinderAsset.Object);
		Cyliner->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		Cyliner->SetWorldScale3D(FVector(1.0f));
	}
}

// Called when the game starts or when spawned
void AAddMeshFromFileActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAddMeshFromFileActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}