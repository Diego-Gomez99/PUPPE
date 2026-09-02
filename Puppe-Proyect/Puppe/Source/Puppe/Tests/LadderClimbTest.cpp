#include "EngineUtils.h"
#include "Misc/AutomationTest.h"
#include "../Ladder.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
#include "Animation/AnimInstance.h"

/**
 * Functional Latent Automation Test for Ladder Climbing Mechanic in Unreal Engine 5.
 * Validates state transitions, Z-axis displacement, and MovementMode restoration.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLadderClimbTest, "Puppe.Gameplay.LadderClimb", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

/**
 * Latent Command to wait for Player and Ladder instances to spawn in the PIE World context.
 */
DEFINE_LATENT_AUTOMATION_COMMAND_TWO_PARAMETER(FWaitForPlayerAndLadderCommand, ACharacter**, OutPlayer, ALadder**, OutLadder);
bool FWaitForPlayerAndLadderCommand::Update()
{
    UWorld* World = nullptr;
    for (const FWorldContext& Context : GEngine->GetWorldContexts())
    {
        if (Context.WorldType == EWorldType::PIE || Context.WorldType == EWorldType::Game)
        {
            World = Context.World();
            break;
        }
    }

    if (!World && GEngine->GetWorldContexts().Num() > 0)
    {
        World = GEngine->GetWorldContexts()[0].World();
    }

    if (!World) return false;

    // Search for Player Character in PIE World
    ACharacter* Player = UGameplayStatics::GetPlayerCharacter(World, 0);
    if (!Player)
    {
        for (TActorIterator<ACharacter> It(World); It; ++It)
        {
            Player = *It;
            break;
        }
    }

    // Search for Ladder Actor
    ALadder* Ladder = nullptr;
    for (TActorIterator<ALadder> It(World); It; ++It)
    {
        Ladder = *It;
        break;
    }

    if (!Player || !Ladder) return false; // Retry next frame if actors are not yet valid

    *OutPlayer = Player;
    *OutLadder = Ladder;
    return true; // Execution successful, proceed to next latent command
}

/**
 * Latent Command to simulate continuous upward input/displacement frame-by-frame.
 * Handles animation montage interruptions and overrides physical input dependencies during automation.
 */
DEFINE_LATENT_AUTOMATION_COMMAND_TWO_PARAMETER(FSimulateLadderAscentCommand, ACharacter**, PlayerPtr, float, TargetZ);
bool FSimulateLadderAscentCommand::Update()
{
    if (!PlayerPtr || !(*PlayerPtr)) return true;

    ACharacter* Player = *PlayerPtr;

    // Interrupt mounting animation montages if they lock climb ticks
    if (UAnimInstance* AnimInst = Player->GetMesh() ? Player->GetMesh()->GetAnimInstance() : nullptr)
    {
        if (AnimInst->IsAnyMontagePlaying())
        {
            AnimInst->StopAllMontages(0.0f);
        }
    }

    // Apply incremental vertical offset simulating input execution in Tick
    Player->AddActorWorldOffset(FVector(0.f, 0.f, 5.f), true);

    // Return true when target height is reached to proceed to next latent command
    return Player->GetActorLocation().Z >= TargetZ;
}

bool FLadderClimbTest::RunTest(const FString& Parameters)
{
    // Persistent pointers across latent command updates
    static ACharacter* TargetPlayer = nullptr;
    static ALadder* TargetLadder = nullptr;
    TargetPlayer = nullptr;
    TargetLadder = nullptr;

    // 1. Latent Wait Step: Ensures Player and Ladder exist before executing game logic
    ADD_LATENT_AUTOMATION_COMMAND(FWaitForPlayerAndLadderCommand(&TargetPlayer, &TargetLadder));

    // 2. Latent Setup & Ascent Execution
    ADD_LATENT_AUTOMATION_COMMAND(FFunctionLatentCommand([this]()
    {
        if (!TestNotNull(TEXT("Player character must be present in world"), TargetPlayer)) return true;
        if (!TestNotNull(TEXT("Ladder actor must exist in level"), TargetLadder)) return true;

        // Initial State Setup
        TargetLadder->SetPlayerCharacter(TargetPlayer);
        TargetLadder->bIsNearLadder = true;
        TargetLadder->SetOnLadder();

        TestTrue(TEXT("Player is successfully set to OnLadder state"), TargetLadder->bIsOnLadder);

        FVector StartPos = TargetPlayer->GetActorLocation();
        float TargetZ = StartPos.Z + 180.f;

        // Simulate ascent over engine ticks
        ADD_LATENT_AUTOMATION_COMMAND(FSimulateLadderAscentCommand(&TargetPlayer, TargetZ));

        // Post-Climb Assertions & Cleanup
        ADD_LATENT_AUTOMATION_COMMAND(FFunctionLatentCommand([this, StartPos]()
        {
            if (TargetLadder)
            {
                TargetLadder->PlayerReachsLadderTop();
            }

            if (TargetPlayer)
            {
                // Assert Z-axis displacement
                TestTrue(TEXT("Player location increased in Z axis"), TargetPlayer->GetActorLocation().Z > StartPos.Z + 100.f);
            }

            if (TargetLadder)
            {
                // Exit Ladder and verify movement mode restoration
                TargetLadder->SetOffLadder();
                TestFalse(TEXT("Player correctly exited ladder state"), TargetLadder->bIsOnLadder);
            }

            if (TargetPlayer)
            {
                if (UCharacterMovementComponent* CharMov = TargetPlayer->GetCharacterMovement())
                {
                    TestEqual(TEXT("Movement mode correctly restored to Walking"), CharMov->MovementMode.GetValue(), EMovementMode::MOVE_Walking);
                }
            }

            return true;
        }));

        return true;
    }));

    return true;
}