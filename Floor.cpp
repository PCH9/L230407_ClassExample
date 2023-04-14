#include "Floor.h"
#include <iostream>

AFloor::AFloor()
{
	R = 200;
	G = 200;
	B = 200;
}

AFloor::AFloor(int NewX, int NewY, char NewShape)
	:AActor(NewX, NewY, NewShape)
{
	SortOrder = 1;
	R = 200;
	G = 200;
	B = 200;
}

AFloor::~AFloor()
{
}
