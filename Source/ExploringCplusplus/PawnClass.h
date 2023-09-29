/*
// Zac Bogner // Level (Game) Designer // Motorsports Enthusiast // Unreal Engine // Unity // c# // c++
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PawnClass.generated.h"

UCLASS()
class EXPLORINGCPLUSPLUS_API APawnClass : public APawn
{
	GENERATED_BODY()

private:
	int32 myInt;
	float myFloat;
	bool myBool;
	FString message = "myName";
	FString myMessage = FString(TEXT("My Name is Zac"));

	void DeclareFunction();
	void PrivateFunction(); 
	float privateFloat; 

public:
	// Sets default values for this pawn's properties
	APawnClass();

	void PublicFunction(); 
	float publicFloat; 

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	 UPROPERTY(VisibleAnywhere, BlueprintReadOnly);
	 class UCapsuleComponent* Capsule;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};