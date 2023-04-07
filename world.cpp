#include "World.h"
#include "Actor.h"
#include <iostream>

UWorld::UWorld()
{
}

UWorld::~UWorld()
{
}

void UWorld::Move()
{
}

void UWorld::SpawnActor(AActor* NewActor)
{
	if (NewActor != nullptr)
	{
		Actors.push_back(NewActor);
	}
}
