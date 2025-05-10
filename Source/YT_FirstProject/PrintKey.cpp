// Fill out your copyright notice in the Description page of Project Settings.


#include "PrintKey.h"
#include "Engine/GameEngine.h"

// Sets default values
APrintKey::APrintKey()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APrintKey::BeginPlay()
{
	Super::BeginPlay();
	
	if (GEngine)
	{
		//GEngine->AddOnScreenDebugMessage(key value, Time to display, color, message);
		
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Hello World!"));
	}
}

// Called every frame
void APrintKey::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

