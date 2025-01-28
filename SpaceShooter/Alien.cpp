#include "Alien.h"

Alien::Alien()
{

}

Alien::~Alien()
{
}

void Alien::Draw()
{
	DrawRectangle(position.x, position.y, 10, 10, WHITE);
}


void  Alien::Update()
{

}

void Alien::Shoot()
{

}

void Alien::GetType()
{
	switch (type)
	{
	case 1:
		value = 10;
		break;
	case 2:
		value = 20;
		break;
	case 3:
		value = 40;
	}
}