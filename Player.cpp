#include "Player.h"
#include <iostream>

APlayer::APlayer()
{
	
}

APlayer::APlayer(int NewX, int NewY, int NewShape)
	:AActor(NewX, NewY, NewShape)
{
}

APlayer::~APlayer()
{
}
