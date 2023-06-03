// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabber.h"

#include "Engine/World.h"


// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();
	// ...
	
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	/*
	FRotator r_Rotation = GetComponentRotation();

	FString s_Rotation= r_Rotation.ToCompactString();

	UE_LOG(LogTemp, Display, TEXT("Current Camera Rotation = %s"),*s_Rotation);



	float f_Time=GetWorld()->TimeSeconds;

	UE_LOG(LogTemp, Display, TEXT("Time Elapsed = %f"),f_Time);
	*/
	if(GetPhysicsHandleComponent()->GetGrabbedComponent() !=nullptr)
	{
		FVector v_TargetLocation= GetComponentLocation() +GetForwardVector()*f_RayDistance;
		GetPhysicsHandleComponent()->SetTargetLocationAndRotation(v_TargetLocation,GetComponentRotation());
	}

	if(!GetPhysicsHandleComponent())
	{
		UE_LOG(LogTemp,Warning, TEXT("No Physics Handle Component Found."));
		return;
	}

	// ...
}

void UGrabber::Grab()
{
	
	FHitResult HitResult;
	if(ObjectSweep(HitResult))
	{
		UPrimitiveComponent* pc_Component=HitResult.GetComponent();
		pc_Component->SetSimulatePhysics(true);
		pc_Component->WakeAllRigidBodies();
		AActor* a_HitActor=HitResult.GetActor();
		a_HitActor->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		 GetPhysicsHandleComponent()->GrabComponentAtLocationWithRotation
		 (
			pc_Component,
			NAME_None,
			HitResult.ImpactPoint,
			GetComponentRotation()
		 );
		a_HitActor->Tags.Add("Grabbed");
		/*
		AActor* a_Result=HitResult.GetActor();
		DrawDebugSphere(GetWorld(),HitResult.Location,10,10,FColor::Yellow,false,5);
		DrawDebugSphere(GetWorld(),HitResult.ImpactPoint,10,10,FColor::Magenta,false,5); //Impact point
		UE_LOG(LogTemp, Display, TEXT("Ray has hit: %s"),*a_Result->GetActorNameOrLabel());
		*/
	}
}
void UGrabber::Release()
{
	//UE_LOG(LogTemp, Display, TEXT("Released Grabber"));
	if(GetPhysicsHandleComponent()->GetGrabbedComponent())
	{
		GetPhysicsHandleComponent()->GetGrabbedComponent()->WakeAllRigidBodies();
		GetPhysicsHandleComponent()->GetGrabbedComponent()->GetOwner()->Tags.Remove("Grabbed");
		GetPhysicsHandleComponent()->ReleaseComponent();
		GetOwner()->Tags.Remove("Grabbed");
	}
}

UPhysicsHandleComponent* UGrabber::GetPhysicsHandleComponent() 
{
	UPhysicsHandleComponent* p_HandleComponent=GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	
	if(!p_HandleComponent)
	{
		UE_LOG(LogTemp,Warning, TEXT("No Physics Handle Component Found."));
		return nullptr;
	}

	return p_HandleComponent;
}
bool UGrabber::ObjectSweep(FHitResult &outHitResult) const
{
	FVector v_Start=GetComponentLocation();

	FVector v_End=v_Start+GetForwardVector()*f_RayDistance;

	//DrawDebugLine(GetWorld(),v_Start,v_End,FColor::Red);

	//DrawDebugSphere(GetWorld(),v_End,10,10,FColor::Blue,false,5);

	FCollisionShape cs_Sphere=FCollisionShape::MakeSphere(f_GrabRadius);

	
	return GetWorld()->SweepSingleByChannel
	(
		outHitResult,
		v_Start,v_End,
		FQuat::Identity,
		ECC_GameTraceChannel2,
		cs_Sphere
	);
}

