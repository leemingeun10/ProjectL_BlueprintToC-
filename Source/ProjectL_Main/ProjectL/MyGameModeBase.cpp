// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "kismet/KismetSystemLibrary.h"

AMyGameModeBase::AMyGameModeBase()
{
    PrimaryActorTick.bCanEverTick = true;  // Tick ��� ����
}

void AMyGameModeBase::BeginPlay()
{
    Super::BeginPlay();
}

void AMyGameModeBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    if (bGimmicPlayed)
    {
        EndGimmic();

    }
    else
    {
        if (bGimmic)
        {
            
        }
    }

}

// ===== ��� ���� �Լ� =====

void AMyGameModeBase::SpawnGimmicBall()
{
    // TODO: ��� ���� ���� ���� ����
}

void AMyGameModeBase::SpawnFloor()
{
    // TODO: �ٴ� ���� ���� ����
}

void AMyGameModeBase::EndGimmic()
{
    // TODO: ��� ���� ó��
}

void AMyGameModeBase::StartGimmic()
{
    // TODO: ��� ���� ó��
}

void AMyGameModeBase::SpawnGimmicLoc()
{
    // TODO: ��� ��ġ ��� �� ����
}

void AMyGameModeBase::ResetCamera()
{
    // TODO: ī�޶� ���� ��ġ�� ����
}

void AMyGameModeBase::DisplayUIText(const FString& Text, float Duration)
{
    // TODO: UI �ؽ�Ʈ ��� (HUD ȣ��)
}

void AMyGameModeBase::OnPlayerDied()
{
    // TODO: �÷��̾� ��� �� ó��
}

void AMyGameModeBase::OnBossDied()
{
    // TODO: ���� ��� �� ó��
}


