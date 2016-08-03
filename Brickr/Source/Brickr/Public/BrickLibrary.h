// Copyright Sean King 2016

#pragma once

#include "Components/SceneComponent.h"
#include "BrickLibrary.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BRICKR_API UBrickLibrary : public USceneComponent
{
	GENERATED_BODY()

public:	
	UBrickLibrary();
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
};
