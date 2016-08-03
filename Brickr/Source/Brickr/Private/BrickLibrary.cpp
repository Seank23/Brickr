// Copyright Sean King 2016

#include "Brickr.h"
#include "BrickLibrary.h"


UBrickLibrary::UBrickLibrary()
{
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;
}

void UBrickLibrary::BeginPlay()
{
	Super::BeginPlay();
	
}

void UBrickLibrary::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

}

