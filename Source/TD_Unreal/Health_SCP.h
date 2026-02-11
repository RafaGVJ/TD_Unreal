#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Health_SCP.generated.h"

class UTextBlock;
class UProgressBar;

UCLASS()
class TD_UNREAL_API UHealth_SCP : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	TObjectPtr<UTextBlock> HealthText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	TObjectPtr<UProgressBar> HealthBar;

public:
	virtual void NativeConstruct() override;

	void SetHealthBar(float CurrentHealth, float MaxHealth);
};
