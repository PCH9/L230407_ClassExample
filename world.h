#pragma once
#include<vector>

class AActor; // 전방선언 , 포인터 / '얘가 어딘가 있을테니가 너가 알아서 가져다 써라'를 의미

class UWorld
{
public:
	UWorld();
	virtual ~UWorld();

	void SpawnActor(AActor* NewActor);

	//virtual void Input();
	virtual void Tick();
	virtual void Render();

	void Sort();

protected:
	std::vector<AActor*> Actors;

};

