// Copyright 2021 Red J

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FlecsComponents.h"
#include "FlecsPrefabDefinition.h"
#include "FlecsSystems.generated.h"

UCLASS()
class UNREALFLECS_API UFlecsSystems : public UObject
{
	GENERATED_BODY()

	UFlecsSystems();

	flecs::query<FLocationComp, const FVelocityComp> QLocationVelocity;

	//virtual void Tick(float DeltaTime) override;
};

