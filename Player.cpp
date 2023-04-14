#include "Player.h"
#include "MyGameEngine.h"
#include <iostream>
#include "world.h"

APlayer::APlayer()
{
	Shape = 'P';
	X = 2;
	Y = 2;
	bIsCollision = false;
	R = 0;
	G = 0;
	B = 255;
}

APlayer::APlayer(int NewX, int NewY, int NewShape)
	:AActor(NewX, NewY, NewShape)
{
	SortOrder = 3;
	R = 0;
	G = 0;
	B = 255;
}

APlayer::~APlayer()
{
}

void APlayer::Tick()
{
	if (GEngine->MyEvent.type == SDL_KEYDOWN) // Å°´Ù¿î ¾ÈµÊ
	{
		return;
	}

	switch (GEngine->MyEvent.key.keysym.sym)
	{
	case SDLK_w:
	case SDLK_UP:
		if (!GEngine->GetWorld()->CheckCollision(X, Y - 1))
		{
			Y--;
		}
		break;
	case SDLK_s:
	case SDLK_DOWN:
		if (!GEngine->GetWorld()->CheckCollision(X, Y + 1))
		{
			Y++;
		}
		break;
	case SDLK_a:
	case SDLK_LEFT:
		if (!GEngine->GetWorld()->CheckCollision(X - 1, Y))
		{
			X--;
		}
		break;
	case SDLK_d:
	case SDLK_RIGHT:
		if (!GEngine->GetWorld()->CheckCollision(X + 1, Y))
		{
			X++;
		};
		break;
	case SDLK_q:
	case SDLK_ESCAPE:
		GEngine->Stop();
		break;
	}
}
