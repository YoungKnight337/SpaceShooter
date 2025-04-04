#include "Projectile.h"

Projectile::Projectile()
	:width{4},height{15},speed{},active{},color{}
{

}
Projectile::Projectile(int width, int height, float speed, bool active, Color color)
	:width{width}, height{height}, speed{speed}, active{active}, color{color}
{

}

Projectile::~Projectile()
{

}

void Projectile::Draw()
{
	if(active==true)
		DrawRectangle(position.x,position.y,width,height,color);
}

void Projectile::Update(Player& ship, Alien& alien, Block& block)
{
	Move(ship, alien);
	CheckCollision(ship,alien,block);
	Vanish();
}

void Projectile::Vanish()
{
	if (active == true)
	{
		if (position.y <= 0 || position.y <= GetScreenHeight())
			active == false;
	}
}

void Projectile::Move(Player& ship, Alien& alien)
{
	if(active == true)
	{ 
		if(PLAYER)
			position.y += static_cast<int>(speed.y);
		if(ENEMY)
			position.y -= static_cast<int>(speed.y);
	}
}
void Projectile::CheckCollision(Player& ship, Alien& alien, Block& block)
{
	if(active == true)
	{ 
	  /*
		if (CheckCollisionRecs(GetRect(), ship.GetRect()))
		{
			active == false;
		}
	  */
		if(CheckCollisionRecs(GetRect(), alien.GetRect()))
		{
			active == false;
		}
		else if(CheckCollisionRecs(GetRect(), block.GetRect()))
		{ 
			active == false;
		}
	}
}


Rectangle Projectile::GetRect()
{
	return{position.x,position.y,static_cast<float>(width),static_cast<float>(height) };
}