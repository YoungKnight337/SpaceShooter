#include "Projectile.h"

Projectile::Projectile()
	:width{ 4 }, height{ 15 }, speed_x{}, speed_y{}, active{}, color{}
{

}
Projectile::Projectile(int width, int height, float speed_x,float speed_y, bool active, Color color)
	:width{ width }, height{ height }, speed_x{ speed_x }, speed_y{ speed_y }, active {active}, color{ color }
{

}

Projectile::~Projectile()
{

}

void Projectile::Initialize(Player player)
{
	if (active == true)
	{
		if (PLAYER)
		{
			position.x = player.GetPosition().x + player.GetRect().width / 4;
			position.y = player.GetPosition().y;
		}
		/*if (ENEMY)
		{
			position.x = alien.GetRect().x + alien.GetRect().width / 4;
			position.y = alien.GetRect().y + alien.GetRect().height;
		}
		*/
	}
	

}

void Projectile::Draw(Player player)
{
	if (active == true)
	{
		if (PLAYER)
		{
			DrawRectangle(position.x, position.y, width, height, WHITE);
		}
		/*if (ENEMY)
		{
			DrawRectangle(alien.GetRect().x, alien.GetRect().y, width, height, RED);
		}
		*/
	}

}

void Projectile::Update(Player& ship, Alien& alien, Block& block)
{
	Move(ship);
	CheckCollision(ship,alien,block);
	Destroy();
}


void Projectile::Move(Player& ship)
{
	if(active == true)
	{ 
		if(PLAYER)
			position.y += static_cast<int>(speed_y); //Move Up
		/*if (ENEMY)
			position.y -= static_cast<int>(speed_y); //Move Down
		*/
	}
}
void Projectile::CheckCollision(Player& ship, Alien& alien, Block& block)
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
		else if(CheckCollisionRecs(GetRect(), block.GetRect()))
		{ 
			active == false;
		}
	}
}

void Projectile::Destroy()
{
	if (active == true)
	{
		if (position.y <= 0 || position.y <= GetScreenHeight())
			active == false;
	}
}

Rectangle Projectile::GetRect()
{
	return{position.x,position.y,static_cast<float>(width),static_cast<float>(height) };
}