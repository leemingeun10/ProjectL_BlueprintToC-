// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "kismet/KismetSystemLibrary.h"

AMyGameModeBase::AMyGameModeBase()
{
    PrimaryActorTick.bCanEverTick = true;  // Tick 사용 설정
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

// ===== 기믹 관련 함수 =====

void AMyGameModeBase::SpawnGimmicBall()
{
    // TODO: 기믹 구슬 스폰 로직 구현
}

void AMyGameModeBase::SpawnFloor()
{
    // TODO: 바닥 스폰 로직 구현
}

void AMyGameModeBase::EndGimmic()
{
    // TODO: 기믹 종료 처리
}

void AMyGameModeBase::StartGimmic()
{
    // TODO: 기믹 시작 처리
}

void AMyGameModeBase::SpawnGimmicLoc()
{
    // TODO: 기믹 위치 계산 및 스폰
}

void AMyGameModeBase::ResetCamera()
{
    // TODO: 카메라 원래 위치로 복귀
}

void AMyGameModeBase::DisplayUIText(const FString& Text, float Duration)
{
    // TODO: UI 텍스트 출력 (HUD 호출)
}

void AMyGameModeBase::OnPlayerDied()
{
    // TODO: 플레이어 사망 시 처리
}

void AMyGameModeBase::OnBossDied()
{
    // TODO: 보스 사망 시 처리
}


