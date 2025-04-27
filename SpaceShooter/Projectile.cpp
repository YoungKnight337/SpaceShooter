#include "Projectile.h"

Projectile::Projectile()
	:active{ false }, speed{}, position{position.x,position.y}, color{ color }
{

}
Projectile::Projectile(bool active, int speed, Vector2 position, Color color)
	:active{ active }, speed{ speed }, position{ position }, color{color}
{

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

void Projectile::Update(Player& ship, Block& block)
{
	Move();
	Destroy(ship,block);
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
void Projectile::Destroy(Player& ship, Block& block)
{
	if (!active) return;
	if (CheckCollisionRecs(GetRect(), ship.GetRect()))
	{
		active = false;
	}
	/*else if (CheckCollisionRecs(GetRect(), alien.GetRect()))
	{
		active = false;
	}
	*/
	else if(CheckCollisionRecs(GetRect(), block.GetRect()))
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