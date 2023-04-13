#define _CRT_SECURE_NO_WARNINGS

#include "GameEngine.h"
#include "World.h"
#include "Wall.h"
#include "Floor.h"
#include "Player.h"
#include "Goal.h"
#include "Monster.h"

#include <iostream>


GameEngine::GameEngine()
{
	World = nullptr;
	blsRunning = true;
}

GameEngine::~GameEngine()
{
	if (World != nullptr)
	{
		delete World;
		World = nullptr;
	}
}

void GameEngine::Init()
{
	World = new UWorld();
}

void GameEngine::Load(std::string FileName)
{
	FILE* file;
	char c;

	file = fopen(FileName.c_str(), "r");
	int PositionX = 1;
	int PositionY = 1;
	while ((c = fgetc(file)) != EOF)
	{
		if (c == '*')
		{
			GetWorld()->SpawnActor(new AWall(PositionX, PositionY));
			//GetWorld()->SpawnActor(new AFloor(PositionX, PositionY));
			//printf("벽");
		}
		else if (c == ' ')
		{
			GetWorld()->SpawnActor(new AFloor(PositionX, PositionY));
			//printf("바닥");
		}
		else if (c == 'P')
		{
			GetWorld()->SpawnActor(new APlayer(PositionX, PositionY));
			//printf("플레이어");
		}
		else if (c == 'G')
		{
			GetWorld()->SpawnActor(new AGoal(PositionX, PositionY));
			//printf("목표");
		}
		else if (c == 'M')
		{
			GetWorld()->SpawnActor(new AMonster(PositionX, PositionY));
			//printf("몬스터");
		}
		else if (c == '\n')
		{
			++PositionY;
			PositionX = 0;
			//printf("줄바꿈");
		}

		//printf("%d", "%d\n", PositionX, PositionY);
		++PositionX;
	}

	fclose(file);
}

void GameEngine::Run()
{
	while (blsRunning) // Frame
	{
		//system("cls");
		Input();
		Tick();
		Render();
	}
}

void GameEngine::Stop()
{
}

void GameEngine::Input()
{
	World->Input();
}

void GameEngine::Tick()
{
	World->Tick();
}

void GameEngine::Render()
{
	World->Render();
}
