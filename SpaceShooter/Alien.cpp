#include "Alien.h"

Alien::Alien()
{

}
Alien::Alien(int value, int width, int height, bool active, Color color)
{

}

Alien::~Alien()
{
}

void Alien::Draw()
{
	DrawRectangle(position.x, position.y, width, height, color);
}


void  Alien::Update()
{
	if (CheckCollisionRecs(GetRect(),Projectile.GetRect()))
	{

	}
}

void Alien::Shoot()
{
	//Projectile( -, -, -, RED)
}

Rectangle Alien::GetRect()
{
	return{ position.x,position.y, static_cast<float>(width),static_cast<float>(height) };
}
