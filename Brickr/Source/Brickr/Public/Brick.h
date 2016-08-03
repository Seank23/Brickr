// Copyright Sean King 2016

#pragma once

#include "GameFramework/Actor.h"
#include "Brick.generated.h"

UCLASS()
class BRICKR_API ABrick : public AActor
{
	GENERATED_BODY()
	
public:	
	ABrick();
	virtual void BeginPlay() override;
	virtual void Tick(float deltaSeconds) override;

protected:
	UPROPERTY(VisibleAnywhere, Category = "Setup")
		UStaticMeshComponent* brickMesh = nullptr;

private:
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
		UTexture* brickThumbnail = nullptr;
	
};
