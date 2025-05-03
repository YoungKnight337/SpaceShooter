#include "Alien.h"

Alien::Alien()
	:value{ }, active{true}, color{}
{

}
Alien::Alien(int value, bool active, Color color)
	:value{value}, active{ active }, color{ color }
{

}

Alien::~Alien()
{

}

void Alien::Draw()
{
	if(active)
		DrawRectangle(position.x, position.y, width, height, color);
}


void  Alien::Update()
{
	CheckCollision();
}

void Alien::Shoot(Projectile& laser)
{
	// Consider the vextor data structure in "Alien.h"
	// Timing seems to be random
	// Make sure that no alien is in the way of line of fire
	//	If No Alien
	//		Open Fire
	// Otherwise
	//		Dont Shoot
	// 
	// Projectile( -, -, -, RED)
}

void Alien::CheckCollision()
{
	if (!active) return;
	if (CheckCollisionRecs(GetRect(), Projectile().GetRect()))
	{
		active == false;
	}
}

Rectangle Alien::GetRect()
{
	return{ position.x,position.y, static_cast<float>(width),static_cast<float>(height) };
}
