#include "MyGameEngine.h"
#include "Monster.h"
#include "Player.h"
#include "Goal.h"
#include "Floor.h"
#include "Wall.h"
#include "World.h"

MyGameEngine::MyGameEngine()
{
}

MyGameEngine::~MyGameEngine()
{
}

void MyGameEngine::Init()
{
	//__super::Init(); ���־� ��Ʃ��� ������ ����
	GameEngine::Init();

	//Map Lord
	Load("Level1.dat");

}
