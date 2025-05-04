#include "Projectile.h"

Projectile::Projectile()
	//:active{}, speed{}, position{position.x,position.y}, color{ color }
{

}

Projectile::Projectile(bool active, int speed, Vector2 position, type origin)
	//:active{ active }, speed{ speed }, position{ position }, color{color}
{
	this->active = active;
	this->speed = speed;
	this->position = position;
	this->origin = origin;
	switch (origin)
	{
	case 0:
		this->color = WHITE;
		break;
	case 1:
		this->color = RED;
		break;
	}
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
	if (active) return;
	switch (origin)
	{
	case 0:
		position.y += speed;
		break;
	case 1:
		position.y -= speed;
		break;
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