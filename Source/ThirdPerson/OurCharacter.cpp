// Fill out your copyright notice in the Description page of Project Settings.


#include "OurCharacter.h"

// Sets default values
AOurCharacter::AOurCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOurCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOurCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AOurCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

