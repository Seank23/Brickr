// Copyright Sean King 2016

#include "Brickr.h"
#include "Brick.h"


ABrick::ABrick()
{
	PrimaryActorTick.bCanEverTick = true;

	brickMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("Brick Mesh"));
}

void ABrick::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABrick::Tick(float deltaTime)
{
	Super::Tick(deltaTime);

}

