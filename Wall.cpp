#include "Wall.h"
#include <iostream>

AWall::AWall()
{
	bIsCollision = true;
}

AWall::AWall(int NewX, int NewY, char NewShape)
	: AActor(NewX, NewY, NewShape)
{
	bIsCollision = true;
	SortOrder = 2;
	//X = NewX;
	//Y = NewY;
	//Shape = NewShape;
}

AWall::~AWall()
{
}

void AWall::Block()
{
}
