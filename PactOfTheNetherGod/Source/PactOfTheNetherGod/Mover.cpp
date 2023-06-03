// Fill out your copyright notice in the Description page of Project Settings.


#include "Mover.h"

#include "Math/UnrealMathUtility.h"

// Sets default values for this component's properties
UMover::UMover()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMover::BeginPlay()
{
	Super::BeginPlay();
	v_startPosition=GetOwner()->GetActorLocation();
	// ...
	
}


// Called every frame
void UMover::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
/*
	AActor* Owner = GetOwner();
	FString Name=Owner->GetActorNameOrLabel();
	FVector v_Pos=Owner->GetActorLocation();
	UE_LOG(LogTemp, Display, TEXT("%u: %s is Looking at me Menacingly from: %s"),Owner,*Name,*v_Pos.ToCompactString());
*/

	FVector v_TargetLocation=v_startPosition;
	if(b_ShouldMove)
	{
		v_TargetLocation=v_startPosition+v_MoveOffset;
	}
		FVector v_CurrentLocation=GetOwner()->GetActorLocation();

		float f_speed=v_MoveOffset.Length()/f_MovementTime;

		FVector v_NewLocation = FMath::VInterpConstantTo(v_CurrentLocation,v_TargetLocation,DeltaTime,f_speed);
	
		GetOwner()->SetActorLocation(v_NewLocation);
}

void UMover::SetMove(bool shouldMove)
{
	b_ShouldMove=shouldMove;
}

