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
	if(active==true)
		DrawRectangle(position.x, position.y, width, height, color);
}


void  Alien::Update(Projectile& laser)
{
	CheckCollision(laser);
}

void Alien::Shoot(Projectile& laser)
{
	// Timing seems to be random
	// Make sure that no alien is in the way of line of fire
	//	If No Alien
	//		Open Fire
	// Otherwise
	//		Dont Shoot
	// 
	// Projectile( -, -, -, RED)
}

void Alien::CheckCollision(Projectile& laser)
{
	if (active == true)
	{
		if (CheckCollisionRecs(GetRect(), laser.GetRect()))
		{
			active == false;
		}
	}
}

Rectangle Alien::GetRect()
{
	return{ position.x,position.y, static_cast<float>(width),static_cast<float>(height) };
}
