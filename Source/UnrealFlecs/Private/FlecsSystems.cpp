// Copyright 2021 Red J


#include "FlecsSystems.h"
#include "../../FlecsLibrary/Public/flecs.h"

UFlecsSystems::UFlecsSystems()
{
    QLocationVelocity = ecs.query<FLocationComp, const FVelocityComp>();
}
