#pragma once
#include "GameEngine.h"
class MyGameEngine : public GameEngine
{
public:
	MyGameEngine();
	~MyGameEngine();
	virtual void Init() override;

};

