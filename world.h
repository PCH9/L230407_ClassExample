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

protected:
	std::vector<AActor*> Actors;

};

