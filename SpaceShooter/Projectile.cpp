#include "Projectile.h"

Projectile::Projectile()
	:width{ }, height{ }, active{ false }, position{}, speed{}
{

}
Projectile::Projectile(int width, int height, bool active, int speed, Vector2 position)
	:width{ width }, height{ height }, active{ active }, position{position}, speed{speed}
{

}

Projectile::~Projectile()
{

}

void Projectile::Initialize(Player player)
{

	position.x = player.GetPosition().x + player.GetRect().width / 4;
	position.y = player.GetPosition().y;
	

		//player.GetPosition().x + player.GetRect().width / 4;
		//position.y = player.GetPosition().y;
		
		/*if (PLAYER)
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

void Projectile::Draw(Player player)
{
	if (active == true)
	{
		DrawRectangle(position.x, position.y, width, height, WHITE);
		/*if (PLAYER)
		{
			
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
	Destroy(ship,alien,block);
}


void Projectile::Move(Player& ship)
{
	if(active == true)
	{ 
		position.y += speed;
		//static_cast<int>(speed_y); //Move Up
		//if(PLAYER)
		/*if (ENEMY)
			position.y -= static_cast<int>(speed_y); //Move Down
		*/
	}
}
void Projectile::Destroy(Player& ship, Alien& alien, Block& block)
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
		else if (position.y > GetScreenHeight() - 100 || position.y <= 0)
		{
			active == false;
		}
	}
}



Rectangle Projectile::GetRect()
{
	return{position.x,position.y,static_cast<float>(width),static_cast<float>(height) };
}