#include "Monster.h"
#include <iostream>

AMonster::AMonster()
{
}

AMonster::AMonster(int NewX, int NewY, char NewShape)
	: AActor(NewX, NewY, NewShape)
{
}

AMonster::~AMonster()
{
}

