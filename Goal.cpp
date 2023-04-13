#include "Goal.h"
#include <iostream>

AGoal::AGoal()
{
}

AGoal::AGoal(int NewX, int NewY, char NewShape)
	: AActor(NewX, NewY, NewShape)
{
}

AGoal::~AGoal()
{
}
