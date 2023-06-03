// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Mover.generated.h"




UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PACTOFTHENETHERGOD_API UMover : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMover();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetMove(bool shouldMove);

private:
	UPROPERTY(EditAnywhere)
	FVector v_MoveOffset;

	UPROPERTY(EditAnywhere)
	float f_MovementTime=5;

	
	bool b_ShouldMove=false;


	FVector v_startPosition;
		
};
