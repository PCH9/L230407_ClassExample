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

	MyGameEngine* Engine = GEngine;
	//MyGameEngine* Engine = MyGameEngine::GetEngine();


	GEngine->Init();
	GEngine->Run();
	//Engine->Init();
	//Engine->Run();

	delete GEngine;
	//delete Engine;

	return 0;
}