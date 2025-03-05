// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TP_WeaponComponent.h"
#include "Pistol.generated.h"

UCLASS()
class AIMTRAINER_API APistol : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = "Mesh")
	UStaticMeshComponent* pistol_mesh;


	
public:	
	// Sets default values for this actor's properties
	APistol();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	FVector pistol_offset = FVector(100.f, 0.f, 10.f);

	UTP_WeaponComponent* pistol_component;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
