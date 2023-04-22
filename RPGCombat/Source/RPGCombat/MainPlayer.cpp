// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Weapon.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "Kismet/KismetMathLibrary.h"
#include "Enemy.h"
#include "ItemStorage.h"
#include "MainPlayerController.h"
#include "RPGCombatSaveGame.h"


// Sets default values
AMainPlayer::AMainPlayer()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create Camera Boom (pulls towards player when collision happens)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 500.f; // Camera Boom follow player at this distance
	CameraBoom->bUsePawnControlRotation = true; // Rotate arm based on comtroller

	// Set Capsule collider radius and height
	GetCapsuleComponent()->SetCapsuleSize(48.f, 105.f);

	// Create Follow Camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	// Attach Follow Camera to Camera Boom and let Camera Boom adjust the Controller Oriention.
	FollowCamera->bUsePawnControlRotation = false;

	BaseTurnRate = 65.f;
	BaseLookUpRate = 65.f;

	// Player do not get affect by rotation only camera get affected
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	// Configure Character movement 
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate player in direction of input...
	GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f); // ...rotate player at this rate
	GetCharacterMovement()->JumpZVelocity = 650.f; // Player jump at this velocity
	GetCharacterMovement()->AirControl = 0.2f;
	// how much player can control in air (1 for full control and 0 for no control)

	MaxHealth = 100.f;
	Health = 100.f;
	MaxStamina = 150.f;
	Stamina = 150.f;
	Coins = 0;

	RunningSpeed = 650.f;
	SprintingSpeed = 950.f;

	bShiftKeyDown = false;
	bMoveForward = false;

	// Initizalize Enums
	MovementStatus = EMovementStatus::EMS_Normal;
	StaminaStatus = EStaminaStatus::ESS_Normal;

	StaminaDrainRate = 10.f;
	StaminaGainRate = 8.f;
	MinSprintStamina = 20.f;

	bLMBDown = false;
	bESCDown = false;

	bAttacking = false;
	Attack1_Speed = 2.f;
	Attack2_Speed = 1.8f;

	bInterpToEnemy = false;
	InterpSpeed = 15.F;
	CombatTarget = nullptr;

	bHasCombatTarget = false;

	EquippedWeapon = nullptr;
}

// Called when the game starts or when spawned
void AMainPlayer::BeginPlay()
{
	Super::BeginPlay();

	MainPlayerController = Cast<AMainPlayerController>(GetController());
	SetEquippedWeapon(nullptr);

	FString Map = GetWorld()->GetMapName();
	Map.RemoveFromStart(GetWorld()->StreamingLevelsPrefix);

	if(Map != "SunTemple")
	{
		LoadGameNoSwitch();
	}

	if(MainPlayerController)
	{
		MainPlayerController->GameModeOnly();
	}
}

// Called every frame
void AMainPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!Alive()) return;

	float DeltaDrainStamina = StaminaDrainRate * DeltaTime;
	float DeltaGainStamina = StaminaGainRate * DeltaTime;

	switch (StaminaStatus)
	{
	case EStaminaStatus::ESS_Normal:
		if (bShiftKeyDown && bMoveForward)
		{
			Stamina -= DeltaDrainStamina;
			if (Stamina <= MinSprintStamina)
				SetStaminaStatus(EStaminaStatus::ESS_BelowMinimum);
			SetMovementStatus(EMovementStatus::EMS_Sprinting);
		}
		else
		{
			Stamina += DeltaGainStamina;
			if (Stamina >= MaxStamina)
				Stamina = MaxStamina;
			SetMovementStatus(EMovementStatus::EMS_Normal);
		}
		break;
	case EStaminaStatus::ESS_BelowMinimum:
		if (bShiftKeyDown && bMoveForward)
		{
			Stamina -= DeltaDrainStamina;
			if (Stamina <= 0)
			{
				Stamina = 0;
				SetStaminaStatus(EStaminaStatus::ESS_Exhausted);
			}
			SetMovementStatus(EMovementStatus::EMS_Sprinting);
		}
		else
		{
			Stamina += DeltaGainStamina;
			if (Stamina >= MinSprintStamina)
				SetStaminaStatus(EStaminaStatus::ESS_Normal);
			SetMovementStatus(EMovementStatus::EMS_Normal);
		}
		break;
	case EStaminaStatus::ESS_Exhausted:
		if (bShiftKeyDown)
		{
			Stamina = 0;
		}
		else
		{
			SetStaminaStatus(EStaminaStatus::ESS_ExhaustedRecovering);
		}
		SetMovementStatus(EMovementStatus::EMS_Normal);
		break;
	case EStaminaStatus::ESS_ExhaustedRecovering:
		Stamina += DeltaGainStamina;
		if (Stamina >= MinSprintStamina)
			SetStaminaStatus(EStaminaStatus::ESS_Normal);
		SetMovementStatus(EMovementStatus::EMS_Normal);
		break;
	default:
		;
	}

	if (bInterpToEnemy && CombatTarget)
	{
		FRotator LookAtYaw = GetLookAtRotationYaw(CombatTarget->GetActorLocation());
		FRotator InterpRotation = FMath::RInterpTo(GetActorRotation(), LookAtYaw, DeltaTime, InterpSpeed);

		SetActorRotation(InterpRotation);
	}

	if (CombatTarget)
	{
		CombatTargetLocation = CombatTarget->GetActorLocation();
		if (MainPlayerController)
		{
			MainPlayerController->EnemyLocation = CombatTargetLocation;
		}
	}
	else
	{
		if (MainPlayerController)
		{
			MainPlayerController->RemoveEnemyHealthBar();
		}
	}
}

FRotator AMainPlayer::GetLookAtRotationYaw(FVector Target)
{
	FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), Target);
	FRotator LookAtRotationYaw(0.f, LookAtRotation.Yaw, 0.f);
	return LookAtRotationYaw;
}

// Called to bind functionality to input
void AMainPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Check if @param PlayerInputComponent is valid and not null
	check(PlayerInputComponent);

	// Bind function to jump action
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMainPlayer::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	//Bind function to sprint action
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AMainPlayer::ShiftKeyDown);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AMainPlayer::ShiftKeyUp);

	//Bind function to ESC action
	PlayerInputComponent->BindAction("ESC", IE_Pressed, this, &AMainPlayer::ESCDown);
	PlayerInputComponent->BindAction("ESC", IE_Released, this, &AMainPlayer::ESCUp);

	//Bind function to Left Mouse Button action
	PlayerInputComponent->BindAction("LMB", IE_Pressed, this, &AMainPlayer::LMBDown);
	PlayerInputComponent->BindAction("LMB", IE_Released, this, &AMainPlayer::LMBUp);

	// Bind function to move forward and backward
	PlayerInputComponent->BindAxis("MoveForward", this, &AMainPlayer::MoveForward);

	// Bind function to move right/left
	PlayerInputComponent->BindAxis("MoveRight", this, &AMainPlayer::MoveRight);

	// Bind function to look up/down and  turn right/left using arrow key
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMainPlayer::LookUpAtRate);
	PlayerInputComponent->BindAxis("TurnRate", this, &AMainPlayer::TurnAtRate);

	// Bind function to look up/down and  turn right/left using mouse
	PlayerInputComponent->BindAxis("LookUp", this, &AMainPlayer::LookUp);
	PlayerInputComponent->BindAxis("Turn", this, &AMainPlayer::Turn);
}

bool AMainPlayer::CanMove(float Value)
{
	if(MainPlayerController)
	{
		return  Value != 0.f &&
			    Alive() &&
			   	!MainPlayerController->bPauseMenuVisible;
	}
	return false;
}

void AMainPlayer::MoveForward(float Value)
{
	if (CanMove(Value) && !bAttacking)
	{
		// Get controller rotation and store it yaw rotation
		const FRotator Rotation = GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		// Get forward direction of yaw rotation using rotation matrix
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// Move player in direction as per input value
		AddMovementInput(Direction, Value);

		bMoveForward = true;
	}
	else
		bMoveForward = false;
}

void AMainPlayer::MoveRight(float Value)
{
	if (CanMove(Value) && !bAttacking)
	{
		// Get controller rotation and store it yaw rotation
		const FRotator Rotation = GetControlRotation();
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		// Get right direction of yaw rotation using rotation matrix
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// Move player in direction as per input value
		AddMovementInput(Direction, Value);
	}
}

void AMainPlayer::Turn(float Value)
{
	if(CanMove(Value))
	{
		AddControllerYawInput(Value);
	}
}

void AMainPlayer::LookUp(float Value)
{
	if(CanMove(Value))
	{
		AddControllerPitchInput(Value);
	}
}

void AMainPlayer::TurnAtRate(float Rate)
{
	if(CanMove(Rate))
	{
		AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
	}
}

void AMainPlayer::LookUpAtRate(float Rate)
{
	if(CanMove(Rate))
	{
		AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
	}
}

void AMainPlayer::Die()
{
	if (!Alive()) return;

	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && CombatMontage)
	{
		AnimInstance->Montage_Play(CombatMontage, 1.f);
		AnimInstance->Montage_JumpToSection(FName("Death"), CombatMontage);
	}
	SetMovementStatus(EMovementStatus::EMS_Dead);

	if (EquippedWeapon)
	{
		EquippedWeapon->DeactivateCollision();
		EquippedWeapon->SetMainPlayer(nullptr);
	}

	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AMainPlayer::Jump()
{
	if (Alive())
		if(MainPlayerController)
			if(!MainPlayerController->bPauseMenuVisible)
				Super::Jump();
}

void AMainPlayer::DecrementHealth(float Amount)
{
	if (Health - Amount <= 0.f)
	{
		Health = 0.f;
		Die();
	}
	else
		Health -= Amount;
}

void AMainPlayer::DeathEnd()
{
	GetMesh()->bPauseAnims = true;
	GetMesh()->bNoSkeletonUpdate = true;
}

void AMainPlayer::IncrementCoin(int32 Amount)
{
	Coins += Amount;
}

void AMainPlayer::IncrementHealth(float Amount)
{
	Health += Amount;
}

void AMainPlayer::SetMovementStatus(EMovementStatus Status)
{
	MovementStatus = Status;
	if (MovementStatus == EMovementStatus::EMS_Normal)
		GetCharacterMovement()->MaxWalkSpeed = RunningSpeed;
	else
		GetCharacterMovement()->MaxWalkSpeed = SprintingSpeed;
}

void AMainPlayer::LMBDown()
{
	bLMBDown = true;

	if (!Alive()) return;

	if(MainPlayerController) if(MainPlayerController->bPauseMenuVisible) return;
	
	if (ActiveOverlappingItem)
	{
		AWeapon* Weapon = Cast<AWeapon>(ActiveOverlappingItem);
		if (Weapon)
		{
			Weapon->Equip(this);
		}
	}
	else if (EquippedWeapon)
	{
		Attack();
	}
}

void AMainPlayer::LMBUp()
{
	bLMBDown = false;
}

void AMainPlayer::ESCDown()
{
	bESCDown = true;
	if(MainPlayerController)
	{
		MainPlayerController->TogglePauseMenu();
	}
}

void AMainPlayer::ESCUp()
{
	bESCDown = false;
}

void AMainPlayer::ShowPickupLocations()
{
	for (int32 i = 0; i < PickupLocations.Num(); i++)
	{
		UKismetSystemLibrary::DrawDebugSphere(this, PickupLocations[i], 25, 8, FLinearColor::Green, 10.f, 0.5f);
	}
}

void AMainPlayer::SetEquippedWeapon(AWeapon* WeaponToSet)
{
	if (EquippedWeapon)
		EquippedWeapon->Destroy();

	EquippedWeapon = WeaponToSet;
}

void AMainPlayer::Attack()
{
	if (!bAttacking && !this->GetMovementComponent()->IsFalling() && Alive())
	{
		bAttacking = true;
		SetInterpToEnemy(true);

		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		if (AnimInstance && CombatMontage)
		{
			int32 Section = FMath::RandRange(0, 1);
			switch (Section)
			{
			case 0:
				AnimInstance->Montage_Play(CombatMontage, Attack1_Speed);
				AnimInstance->Montage_JumpToSection(FName("Attack_1"), CombatMontage);
				break;
			case 1:
				AnimInstance->Montage_Play(CombatMontage, Attack2_Speed);
				AnimInstance->Montage_JumpToSection(FName("Attack_2"), CombatMontage);
				break;
			default:
				break;
			}
		}
	}
}

void AMainPlayer::AttackEnd()
{
	bAttacking = false;
	SetInterpToEnemy(false);
	if (bLMBDown)
	{
		Attack();
	}
}

void AMainPlayer::PlaySwingSound()
{
	if (EquippedWeapon->WeaponSwingSound)
	{
		UGameplayStatics::PlaySound2D(this, EquippedWeapon->WeaponSwingSound);
	}
}

float AMainPlayer::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator,
                              AActor* DamageCauser)
{
	if (Health - DamageAmount <= 0.f)
	{
		Health = 0.f;
		Die();
		if (DamageCauser)
		{
			AEnemy* Enemy = Cast<AEnemy>(DamageCauser);
			if (Enemy)
			{
				Enemy->bHasValidTarget = false;
				Enemy->SetCombatTarget(nullptr);
			}
		}
	}
	else
		Health -= DamageAmount;

	return DamageAmount;
}

void AMainPlayer::UpdateCombatTarget()
{
	TArray<AActor*> OverlappingActors;
	GetOverlappingActors(OverlappingActors, EnemyFilter);

	if (OverlappingActors.Num() == 0)
	{
		SetCombatTarget(nullptr);
		SetHasCombatTarget(false);
		if (MainPlayerController)
		{
			MainPlayerController->RemoveEnemyHealthBar();
		}
		return;
	}

	AEnemy* ClosestEnemy = Cast<AEnemy>(OverlappingActors[0]);
	if (ClosestEnemy)
	{
		FVector Location = GetActorLocation();
		float MinimumDistance = (ClosestEnemy->GetActorLocation() - Location).Size();
		for (auto Actor : OverlappingActors)
		{
			AEnemy* Enemy = Cast<AEnemy>(Actor);
			if (Enemy)
			{
				float DistanceToActor = (Enemy->GetActorLocation() - Location).Size();
				if (DistanceToActor < MinimumDistance)
				{
					MinimumDistance = DistanceToActor;
					ClosestEnemy = Enemy;
				}
			}
		}
		SetCombatTarget(ClosestEnemy);
		SetHasCombatTarget(true);
		if (MainPlayerController)
		{
			MainPlayerController->DisplayEnemyHealthBar();
		}
	}
}

void AMainPlayer::SwitchLevel(FName LevelName)
{
	UWorld* World = GetWorld();
	if(World)
	{
		FString CurrentLevel = World->GetMapName();

		FName CurrentLevelName(*CurrentLevel);
		if(CurrentLevelName != LevelName)
		{
			UGameplayStatics::OpenLevel(World,LevelName);
		}
	}
}

void AMainPlayer::SaveGame()
{
	URPGCombatSaveGame* SaveGameInstance = Cast<URPGCombatSaveGame>(UGameplayStatics::CreateSaveGameObject(URPGCombatSaveGame::StaticClass()));

	SaveGameInstance->CharacterStats.Health = Health;
	SaveGameInstance->CharacterStats.MaxHealth = MaxHealth;
	SaveGameInstance->CharacterStats.Stamina = Stamina;
	SaveGameInstance->CharacterStats.MaxStamina = MaxStamina;
	SaveGameInstance->CharacterStats.Coins = Coins;

	if(EquippedWeapon)
	{
		SaveGameInstance->CharacterStats.WeaponName = EquippedWeapon->WeaponName;
	}

	FString MapName = GetWorld()->GetMapName();
	MapName.RemoveFromStart(GetWorld()->StreamingLevelsPrefix);
	SaveGameInstance->CharacterStats.LevelName = MapName;
	
	SaveGameInstance->CharacterStats.Location = GetActorLocation();
	SaveGameInstance->CharacterStats.Rotation = GetActorRotation();

	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SaveGameInstance->PlayerName, SaveGameInstance->UserIndex);
}

void AMainPlayer::LoadGame(bool SetPosition)
{
	URPGCombatSaveGame* LoadGameInstance = Cast<URPGCombatSaveGame>(UGameplayStatics::CreateSaveGameObject(URPGCombatSaveGame::StaticClass()));
	LoadGameInstance = Cast<URPGCombatSaveGame>(UGameplayStatics::LoadGameFromSlot(LoadGameInstance->PlayerName, LoadGameInstance->UserIndex));

	Health = LoadGameInstance->CharacterStats.Health;
	MaxHealth = LoadGameInstance->CharacterStats.MaxHealth;
	Stamina = LoadGameInstance->CharacterStats.Stamina;
	MaxStamina = LoadGameInstance->CharacterStats.MaxStamina;
	Coins = LoadGameInstance->CharacterStats.Coins;

	if(WeaponStorage)
	{
		AItemStorage* Weapons = GetWorld()->SpawnActor<AItemStorage>(WeaponStorage);
		if(Weapons)
		{
			FString WeaponName = LoadGameInstance->CharacterStats.WeaponName;

			if(Weapons->WeaponMap.Contains(WeaponName))
			{
				AWeapon* WeaponToEquip = GetWorld()->SpawnActor<AWeapon>(Weapons->WeaponMap[WeaponName]);
				WeaponToEquip->Equip(this);
			}
		}
	}
	
	if(SetPosition)
	{
		SetActorLocation(LoadGameInstance->CharacterStats.Location);
		SetActorRotation(LoadGameInstance->CharacterStats.Rotation);
	}

	SetMovementStatus(EMovementStatus::EMS_Normal);
	GetMesh()->bPauseAnims = false;
	GetMesh()->bNoSkeletonUpdate = false;
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	bAttacking = false;

	if(LoadGameInstance->CharacterStats.LevelName != TEXT(""))
	{
		FName LevelName(*LoadGameInstance->CharacterStats.LevelName);
		SwitchLevel(LevelName);
	}
}

void AMainPlayer::LoadGameNoSwitch()
{
	URPGCombatSaveGame* LoadGameInstance = Cast<URPGCombatSaveGame>(UGameplayStatics::CreateSaveGameObject(URPGCombatSaveGame::StaticClass()));
	LoadGameInstance = Cast<URPGCombatSaveGame>(UGameplayStatics::LoadGameFromSlot(LoadGameInstance->PlayerName, LoadGameInstance->UserIndex));

	Health = LoadGameInstance->CharacterStats.Health;
	MaxHealth = LoadGameInstance->CharacterStats.MaxHealth;
	Stamina = LoadGameInstance->CharacterStats.Stamina;
	MaxStamina = LoadGameInstance->CharacterStats.MaxStamina;
	Coins = LoadGameInstance->CharacterStats.Coins;

	if(WeaponStorage)
	{
		AItemStorage* Weapons = GetWorld()->SpawnActor<AItemStorage>(WeaponStorage);
		if(Weapons)
		{
			FString WeaponName = LoadGameInstance->CharacterStats.WeaponName;

			if(Weapons->WeaponMap.Contains(WeaponName))
			{
				AWeapon* WeaponToEquip = GetWorld()->SpawnActor<AWeapon>(Weapons->WeaponMap[WeaponName]);
				WeaponToEquip->Equip(this);
			}
		}
	}

	SetMovementStatus(EMovementStatus::EMS_Normal);
	GetMesh()->bPauseAnims = false;
	GetMesh()->bNoSkeletonUpdate = false;
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	bAttacking = false;
}
