#include "Alien.h"

Alien::Alien(int value, int width, int height, bool active, Vector2 position, Color color)
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

}

void Alien::Shoot()
{

}

Rectangle Alien::GetRect()
{
	return{ position.x,position.y, static_cast<float>(width),static_cast<float>(height) };
}
