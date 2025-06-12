#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

UCLASS()
class PROJECTL_MAIN_API AMyGameModeBase : public AGameModeBase
{
    GENERATED_BODY()

public:
    AMyGameModeBase();

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    // === 기믹 함수들 ===
    UFUNCTION(BlueprintCallable)
    void SpawnGimmicBall();

    UFUNCTION(BlueprintCallable)
    void SpawnFloor();

    UFUNCTION(BlueprintCallable)
    void EndGimmic();

    UFUNCTION(BlueprintCallable)
    void StartGimmic();

    UFUNCTION(BlueprintCallable)
    void SpawnGimmicLoc();

    UFUNCTION(BlueprintCallable)
    void ResetCamera();

    UFUNCTION(BlueprintCallable)
    void DisplayUIText(const FString& Text, float Duration = 3.0f);

    UFUNCTION(BlueprintCallable)
    void OnPlayerDied();

    UFUNCTION(BlueprintCallable)
    void OnBossDied();

    // === 이벤트 디스패처 ===
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGimmicStarted);

    UPROPERTY(BlueprintAssignable, Category = "Gimmic")
    FOnGimmicStarted OnGimmicStarted;

protected:
    // === 상태 변수들 ===
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gimmic")
    bool bGimmic = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gimmic")
    bool bGimmicPlayed = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gimmic")
    float GimmicTime = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game State")
    bool bPlayerDied = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game State")
    bool bBossDied = false;
};
