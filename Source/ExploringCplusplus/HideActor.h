/*
// Zac Bogner // Level (Game) Designer // Motorsports Enthusiast // Unreal Engine // c++
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HideActor.generated.h"

UCLASS()
class EXPLORINGCPLUSPLUS_API AHideActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHideActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Disable") 
	bool hideInGame; 

	UFUNCTION(BlueprintCallable, Category = "Disable")
	void DisableActor();  
};