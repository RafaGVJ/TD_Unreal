#include "TriggerFall.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"

ATriggerFall::ATriggerFall()
{
	PrimaryActorTick.bCanEverTick = true; 
}

void ATriggerFall::BeginPlay()
{
	Super::BeginPlay();
}

void ATriggerFall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Pega o jogador
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (!PlayerPawn) return;

	// Checa a posição Z
	if (PlayerPawn->GetActorLocation().Z < FallZ)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player caiu! Reiniciando nível..."));
		UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
	}
}
