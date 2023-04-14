#include "Wall.h"
#include <iostream>

AWall::AWall()
{
	bIsCollision = true;
	R = 0;
	G = 0;
	B = 0;
}

AWall::AWall(int NewX, int NewY, char NewShape)
	: AActor(NewX, NewY, NewShape)
{
	bIsCollision = true;
	SortOrder = 2;
	//X = NewX;
	//Y = NewY;
	//Shape = NewShape;
	R = 0;
	G = 0;
	B = 0;
}

AWall::~AWall()
{
}

void AWall::Block()
{
}
