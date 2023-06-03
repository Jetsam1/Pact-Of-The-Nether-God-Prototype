// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerComponent.h"
#include "Engine/EngineBaseTypes.h"

UTriggerComponent::UTriggerComponent()
{
    PrimaryComponentTick.bCanEverTick=true;
    PrimaryComponentTick.bStartWithTickEnabled=true; 


    //PrimaryComponentTick.RegisterTickFunction(GetComponentLevel());
    //UE_LOG(LogTemp, Display, TEXT("Trigger Component Constructed"));
   
}
void UTriggerComponent::BeginPlay() 
{
    Super::BeginPlay();
    UE_LOG(LogTemp, Display, TEXT("Trigger Component is online"));
   // m_Mover->SetMove(false);

    
}

void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime,TickType,ThisTickFunction);
    
    //UE_LOG(LogTemp, Display, TEXT("tick"));



    AActor* a_Key=getDoorTrigger();
    if(a_Key != nullptr)
    {
        UPrimitiveComponent* p_Component=Cast<UPrimitiveComponent>(a_Key->GetRootComponent());
        if(p_Component !=nullptr)
        {
            p_Component->SetSimulatePhysics(false);
            a_Key->AttachToComponent(this,FAttachmentTransformRules::KeepWorldTransform);
 
        }
        UE_LOG(LogTemp, Display, TEXT("Door 1 unlocked"));
        m_Mover->SetMove(true);
    }
    else
    {
        UE_LOG(LogTemp, Display, TEXT("Door 1 Locked"));
        m_Mover->SetMove(false);
    }
}


void UTriggerComponent::setMover(UMover* Mover)
{
    UE_LOG(LogTemp, Display, TEXT("Searching For Mover"));
    if(Mover)
    {
     m_Mover=Mover;
    UE_LOG(LogTemp, Warning, TEXT("Mover On Object %s , found"), *GetOwner()->GetActorNameOrLabel());
    }
    else UE_LOG(LogTemp, Warning, TEXT("Mover On Object %s , not found"), *GetOwner()->GetActorNameOrLabel());
}

AActor* UTriggerComponent::getDoorTrigger() const
{
    
    TArray<AActor*> a_Actors;
    GetOverlappingActors(a_Actors);
    for(AActor* Actor :a_Actors)
    {
        FString s_Name =Actor->GetActorNameOrLabel();
        if(Actor->ActorHasTag(n_UnlockTag) && !Actor->ActorHasTag("Grabbed"))
        {
            UE_LOG(LogTemp, Display, TEXT("Door 1 unlocked!"));
            return Actor;
        }
        
    }

    return nullptr;
   
}