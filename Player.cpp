#include "Player.h"
#include <iostream>

APlayer::APlayer()
{
	Shape = 'P';
	X = 2;
	Y = 2;
	
}

APlayer::APlayer(int NewX, int NewY, int NewShape)
	:AActor(NewX, NewY, NewShape)
{
	SortOrder = 3;
}

APlayer::~APlayer()
{
}
