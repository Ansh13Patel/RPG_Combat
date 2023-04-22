// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Weapon.generated.h"

UENUM(BlueprintType)
enum class EWeaponState : uint8
{
	EWS_Pickup UMETA(Displayname = "Pickup"),
	EWS_Equipped UMETA(Displayname = "Equipped"),

	EWS_MAX UMETA(Displayname = "DefaultMax")
};

UCLASS()
class RPGCOMBAT_API AWeapon : public AItem
{
	GENERATED_BODY()

public:
	AWeapon();

	UPROPERTY(EditDefaultsOnly, Category = "SaveData")
	FString WeaponName;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	class AMainPlayer* MainPlayer;

	FORCEINLINE void SetMainPlayer(AMainPlayer* Player) { MainPlayer = Player; }
	
	EWeaponState WeaponState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Particle")
	bool bWeaponParticles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Sound")
	class USoundCue* WeaponEquipSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Sound")
	USoundCue* WeaponSwingSound;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Skeletal Mesh")
	class USkeletalMeshComponent* SkeletalMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item | Combat")
	class UBoxComponent* CombatCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Properties")
	float Damage;

	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	                            UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
	                            const FHitResult& SweepResult) override;

	virtual void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	                          UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;

	void Equip(class AMainPlayer* Player);

	FORCEINLINE void SetWeaponState(EWeaponState State) { WeaponState = State; }
	FORCEINLINE EWeaponState GetWeaponState() { return WeaponState; }

	UFUNCTION()
	void CombatOnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	                          UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
	                          const FHitResult& SweepResult);

	UFUNCTION()
	void CombatOnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	                        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION(BlueprintCallable)
	void ActivateCollision();

	UFUNCTION(BlueprintCallable)
	void DeactivateCollision();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Combat")
	TSubclassOf<UDamageType> DamageTypeClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item | Combat")
	AController* WeaponInstigator;

	FORCEINLINE void SetInstigator(AController* Inst) { WeaponInstigator = Inst; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
