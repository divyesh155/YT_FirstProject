// Fill out your copyright notice in the Description page of Project Settings.


#include "PrintString.h"
#include "Engine/GameEngine.h"

// Sets default values
APrintString::APrintString()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APrintString::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
	{
		//GEngine->AddOnScreenDebugMessage(UNIQUE key value, Display Time, Text Color, Text);

		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Hello World!")); // -1 as key value, it will be unique
	}
}

// Called every frame
void APrintString::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

