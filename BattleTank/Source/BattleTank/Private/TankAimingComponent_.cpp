// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAimingComponent_.h"


// Sets default values for this component's properties
UTankAimingComponent_::UTankAimingComponent_()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UTankAimingComponent_::SetBarrelReference(UStaticMeshComponent* BarrelToSet)
{
	Barrel = BarrelToSet;
}

// Called when the game starts
void UTankAimingComponent_::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTankAimingComponent_::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UTankAimingComponent_::AimAt(FVector HitLocation, float LaunchSpeed)
{
	UE_LOG(LogTemp, Warning, TEXT("Firing at %f"), LaunchSpeed);
	
}