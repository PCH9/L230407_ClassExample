#pragma once
#include<vector>

class AActor; // ���漱�� , ������ / '�갡 ��� �����״ϰ� �ʰ� �˾Ƽ� ������ ���'�� �ǹ�

class UWorld
{
public:
	UWorld();
	virtual ~UWorld();

	virtual void Move();


	void SpawnActor(AActor* NewActor);

	virtual void Input();
	virtual void Tick();
	virtual void Render();

protected:
	std::vector<AActor*> Actors;

};

