#include "Alien.h"

Alien::Alien(int value, int width, int height, Vector2 position, Color color, Rectangle model)
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

void Alien::GetRect()
{

}
