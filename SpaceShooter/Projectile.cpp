#include "Projectile.h"

Projectile::Projectile()
	//:active{}, speed{}, position{position.x,position.y}, color{ color }
{

}

Projectile::Projectile(bool active, int speed, Vector2 position, Color color)
	//:active{ active }, speed{ speed }, position{ position }, color{color}
{
	active = true;
	this->speed = speed;
	this->position = position;
	this->color = color;
}

Projectile::~Projectile()
{

}


void Projectile::Draw()
{
	if (active)
	{
		DrawRectangle(position.x, position.y, width, height, color);
	}

}

void Projectile::Update()
{
	Move();
	Destroy();
}


void Projectile::Move()
{
	if(active)
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