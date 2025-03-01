#include "Projectile.h"

Projectile::Projectile(int width, int height, float speed, bool active, Color color)
{

}

Projectile::~Projectile()
{

}

void Projectile::Draw()
{
	DrawRectangle(position.x,position.y,width,height,color);
}

void Projectile::Update()
{

}

void Projectile::Move()
{

}
void Projectile::Hit(Player& ship, Alien& alien)
{
	if(active == true)
	{ 

		if (CheckCollisionRecs(GetRect(), ship.GetRect()))
		{
			active == false;
		}
		else if(CheckCollisionRecs(GetRect(), alien.GetRect()))
		{
			active == false;
		}
	}
}

Rectangle Projectile::GetRect()
{
	return{ position.x,position.y,static_cast<float>(width),static_cast<float>(height) };
}