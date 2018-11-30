// Copyright Danubio Inc.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Tank.generated.h" // precisa ficar em ultimo

// Fwd declarations
class UTankBarrel;
class AProjectile;

UCLASS()
class BATTLETANK_API ATank : public APawn
{
	GENERATED_BODY()

public:



	UFUNCTION(BlueprintCallable, Category = "Firing")
	void Fire();

private:	
	// Sets default values for this pawn's properties
	ATank();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	TSubclassOf<AProjectile> ProjectileBlueprint;

	// TODO remove once firing is moved to aiming component
	UPROPERTY(EditDefaultsOnly, Category = "Firing")
	float LaunchSpeed = 4000;

	UPROPERTY(EditDefaultsOnly, Category = "Firing")
	float ReloadTimeInSeconds = 3;
	
	// Local barrel reference for spawning projectile
	UTankBarrel* Barrel = nullptr; // TODO remove

	double LastFireTime = 0;
};
