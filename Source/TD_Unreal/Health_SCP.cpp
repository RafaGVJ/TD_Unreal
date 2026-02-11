#pragma once


#include "Health_SCP.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"

void UHealth_SCP::NativeConstruct()
{
	Super::NativeConstruct();
	HealthBar->SetPercent(1);
	HealthText->SetText(FText::FromString("100/100"));
}

void UHealth_SCP::SetHealthBar(float CurrentHealth, float MaxHealth)
{
	constexpr FLinearColor RedColor = FLinearColor(1.0f, 0.0f, 0.0f);
	constexpr FLinearColor OrangeColor = FLinearColor(1.0f, 0.15f, 0.0f);
	constexpr FLinearColor GreenColor = FLinearColor(0.0f, 0.5f, 1.0f);

	if (CurrentHealth <= 30)
	{
		HealthBar->SetFillColorAndOpacity(RedColor);
	}
	else if (CurrentHealth > 30 && CurrentHealth <= 70)
	{
		HealthBar->SetFillColorAndOpacity(OrangeColor);
	}
	else if (CurrentHealth > 70)
	{
		HealthBar->SetFillColorAndOpacity(GreenColor);
	}

	HealthBar->SetPercent(CurrentHealth / MaxHealth);

	FString currentHealthTextString = FString::FromInt(CurrentHealth);
	FString maxHealthTextString = FString::FromInt(MaxHealth);
	HealthText->SetText(FText::FromString(currentHealthTextString + "/" + maxHealthTextString));




}