// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainPlayer.generated.h"

UENUM(BlueprintType)
enum class EMovementStatus : uint8
{
	EMS_Normal UMETA(disaplayname = "Normal") ,
	EMS_Sprinting UMETA(displayname = "Sprinting") ,
	EMS_Dead UMETA(displayname = "Dead"),

	EMS_MAX UMETA(displayname = "DefaultMAX")
};

UENUM(BlueprintType)
enum class EStaminaStatus : uint8
{
	ESS_Normal UMETA(displayname = "Normal"),
	ESS_BelowMinimum UMETA(displayname = "Below Minimum"),
	ESS_Exhausted UMETA(displayname = "Exhausted"),
	ESS_ExhaustedRecovering UMETA(displayname = "Exhausted Recovering"),

	ESS_MAX UMETA(displayname = "DefaultMAX")
};

UCLASS()
class RPGCOMBAT_API AMainPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainPlayer();

	UPROPERTY(EditDefaultsOnly, Category = "SaveData")
	TSubclassOf<class AItemStorage> WeaponStorage;

	TArray<FVector> PickupLocations;

	UFUNCTION(BlueprintCallable)
	void ShowPickupLocations();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	class UParticleSystem* HitParticles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	class USoundCue* HitSound;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Enums")
	EMovementStatus MovementStatus;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Enums")
	EStaminaStatus StaminaStatus;

	FORCEINLINE void SetStaminaStatus(EStaminaStatus Status) { StaminaStatus = Status; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina")
	float StaminaDrainRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina")
	float StaminaGainRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina")
	float MinSprintStamina;

	bool bInterpToEnemy;
	float InterpSpeed;
	FORCEINLINE void SetInterpToEnemy(bool Interp) { bInterpToEnemy = Interp; }

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Controller")
	class AMainPlayerController* MainPlayerController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	class AEnemy* CombatTarget;

	FORCEINLINE void SetCombatTarget(AEnemy* Target) { CombatTarget = Target; }

	FRotator GetLookAtRotationYaw(FVector Target);

	/** Set Movement Status and Running speed */
	void SetMovementStatus(EMovementStatus Status);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Running")
	float RunningSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Running")
	float SprintingSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	bool bHasCombatTarget;

	FORCEINLINE void SetHasCombatTarget(bool HasCombatTarget) { bHasCombatTarget = HasCombatTarget; }

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	FVector CombatTargetLocation;

	bool bShiftKeyDown;
	bool bMoveForward;

	/** Press shift key to start sprinting */
	FORCEINLINE void ShiftKeyDown() { bShiftKeyDown = true; }

	/** Release shift key to stop sprinting */
	FORCEINLINE void ShiftKeyUp() { bShiftKeyDown = false; }

	/**Camera Boom position the camera behind player*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/**Follow Camera*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = Camera)
	float BaseTurnRate;

	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = Camera)
	float BaseLookUpRate;

	/*
	/*
	/* Player Stats
	/*
	*/

	UPROPERTY(EditDefaultsOnly, BluePrintReadOnly, Category = "Player Stats")
	float MaxHealth;

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = "Player Stats")
	float Health;

	UPROPERTY(EditDefaultsOnly, BluePrintReadOnly, Category = "Player Stats")
	float MaxStamina;

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = "Player Stats")
	float Stamina;

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = "Player Stats")
	int32 Coins;


	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator,
	                         AActor* DamageCauser) override;

	void Die();

	virtual void Jump() override;

	UFUNCTION(BlueprintCallable)
	void DeathEnd();

	UFUNCTION(BlueprintCallable)
	void IncrementCoin(int32 Amount);

	UFUNCTION(BlueprintCallable)
    void IncrementHealth(float Amount);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/** Move player forward/backward as per user input value */
	void MoveForward(float Value);

	/** Move player right/left as per user input value */
	void MoveRight(float Value);

	/** Check if player can move or not */
	bool CanMove(float value);

	/** Change camera yaw value */
	void Turn(float Value);

	/** Change camera pitch value */
	void LookUp(float Value);

	/** Called via input to turn at a given rate
	* @param Rate This is a normalize rate, i.e. 1.0 means 100% of desired turn rate
	*/
	void TurnAtRate(float Rate);

	/** Called via input to look up/down at a given rate
	* @param Rate This is a normalize rate, i.e. 1.0 means 100% of desired look up/down rate
	*/
	void LookUpAtRate(float Rate);

	bool bLMBDown;

	void LMBDown();
	void LMBUp();

	bool bESCDown;

	void ESCDown();
	void ESCUp();

	FORCEINLINE class USpringArmComponent* GetCameraBoom() { return CameraBoom; }
	FORCEINLINE class UCameraComponent* GetFollowCamera() { return FollowCamera; }

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item")
	class AWeapon* EquippedWeapon;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item")
	class AItem* ActiveOverlappingItem;

	void DecrementHealth(float Amount);

	void SetEquippedWeapon(AWeapon* WeaponToSet);
	FORCEINLINE void SetActiveOverlappingItem(AItem* Item) { ActiveOverlappingItem = Item; }

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Anim")
	bool bAttacking;

	UFUNCTION(BlueprintCallable)
	void AttackEnd();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Anim")
	class UAnimMontage* CombatMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anim")
	float Attack1_Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anim")
	float Attack2_Speed;

	void Attack();

	UFUNCTION(BlueprintCallable)
	void PlaySwingSound();

	FORCEINLINE bool Alive() { return (MovementStatus != EMovementStatus::EMS_Dead); }

	void UpdateCombatTarget();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Combat")
	TSubclassOf<AEnemy> EnemyFilter;

	void SwitchLevel(FName LevelName);

	UFUNCTION(BlueprintCallable)
	void SaveGame();

	UFUNCTION(BlueprintCallable)
	void LoadGame(bool SetPosition);

	void LoadGameNoSwitch();
};