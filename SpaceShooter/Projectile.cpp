#include "Projectile.h"

Projectile::Projectile()
	:active{}, speed{}, position{position.x,position.y}, color{ color }
{

}
Projectile::Projectile(bool active, int speed, Vector2 position, Color color)
	:active{ active }, speed{ speed }, position{ position }, color{color}
{
	this->position.x = position.x;
	this->position.y = position.y;
	this->speed = speed;
	this->color = color;
}

Projectile::~Projectile()
{

}

/* void Projectile::Initialize(Player player)
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
		
	

}
*/

void Projectile::Draw()
{
	if (active == true)
	{
		DrawRectangle(position.x, position.y, width, height, color);
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

void Projectile::Update()
{
	Move();
	Destroy();
}


void Projectile::Move()
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
void Projectile::Destroy()
{
	if (!active) return;
	if (CheckCollisionRecs(GetRect(), Player().GetRect()))
	{
		active = false;
	}
	else if (CheckCollisionRecs(GetRect(), Alien().GetRect()))
	{
		active = false;
	}
	else if(CheckCollisionRecs(GetRect(), Block().GetRect()))
	{ 
		active = false;
	}
	else if (position.y > GetScreenHeight() || position.y <= 0)
	{
		active = false;
	}

}



Rectangle Projectile::GetRect()
{
	return{position.x,position.y,static_cast<float>(width),static_cast<float>(height) };
}