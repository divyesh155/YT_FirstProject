// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PrintKey.generated.h"

UCLASS()
class YT_FIRSTPROJECT_API APrintKey : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APrintKey();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//virtual void AddNumbers(int32 a, int32 b);

};
