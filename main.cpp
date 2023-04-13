#include <iostream>
#include <ctime>
#include "Floor.h"
#include "Monster.h"
#include "Player.h"
#include "Wall.h"
#include "World.h"
#include "Actor.h"
#include "Goal.h"
#include <vector>

using namespace std;

int main()
{
	UWorld* World = new UWorld();

	World->SpawnActor(new APlayer());
	World->SpawnActor(new AMonster());
	World->SpawnActor(new AGoal());

	delete World;
	

	return 0;
}