#include <iostream>
#include "MyGameEngine.h"
#include <vector>
#include "SDL.h"

#pragma comment(lib, "SDL2.lib")
#pragma comment(lib, "SDL2main.lib")

using namespace std;

int SDL_main(int argc, char* argv[])
{
	/*SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Window* MyWindow = SDL_CreateWindow("Game", 100, 100, 800, 600, SDL_WINDOW_VULKAN);
	SDL_Renderer* MyRenderer = SDL_CreateRenderer(MyWindow, -1, 
		SDL_RENDERER_TARGETTEXTURE | SDL_RENDERER_ACCELERATED);
	SDL_Event* MyEvent = nullptr;
	while (1)
	{
		SDL_PollEvent(MyEvent);
	}
	
	SDL_DestroyRenderer(MyRenderer);
	SDL_DestroyWindow(MyWindow);
	SDL_Quit();*/

	MyGameEngine* Engine = GEngine;
	


	GEngine->Init();
	GEngine->Run();
	

	delete GEngine;

	return 0;
}

//int main()
//{
//	
//
//	////GameEngine
//	//UWorld* World = new UWorld();
//
//	//// Lord
//	//World->SpawnActor(new APlayer());
//	//World->SpawnActor(new AGoal());
//
//	//MyGameEngine* Engine = GEngine;
//	//MyGameEngine* Engine = MyGameEngine::GetEngine();
//
//
//	//GEngine->Init();
//	//GEngine->Run();
//	//Engine->Init();
//	//Engine->Run();
//
//	//delete GEngine;
//	//delete Engine;
//
//	//return 0;
//}