#include <iostream>
#include "MyGameEngine.h"
#include <vector>

using namespace std;

int main()
{
	

	////GameEngine
	//UWorld* World = new UWorld();

	//// Lord
	//World->SpawnActor(new APlayer());
	//World->SpawnActor(new AGoal());
	MyGameEngine* Engine = new MyGameEngine();

	Engine->Init();
	Engine->Run();



	return 0;
}