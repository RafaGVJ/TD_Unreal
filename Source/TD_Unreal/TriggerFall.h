#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TriggerFall.generated.h"

UCLASS()
class TD_UNREAL_API ATriggerFall : public AActor
{
	GENERATED_BODY()

public:
	ATriggerFall();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	// Altura mínima para resetar o nível
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fall")
	float FallZ = -100.f;
};
