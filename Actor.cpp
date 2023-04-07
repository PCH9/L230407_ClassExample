#include "Actor.h"
#include <windows.h>
#include <iostream>

AActor::AActor()
{
	X = 1;
	Y = 1;
	Shape = ' ';
}

AActor::AActor(int NewX, int NewY, char NewShape)
{
	X = NewX;
	Y = NewY;
	Shape = NewShape;
}

AActor::~AActor()
{
}

void AActor::Input()
{
}

void AActor::Tick()
{
}

void AActor::Render()
{
}
