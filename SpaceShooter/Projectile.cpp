#include "Projectile.h"

Projectile::Projectile()
{

}

Projectile::Projectile(bool active, int speed, Vector2 position, origin shooter)
{
	this->active = active;
	this->speed = speed;
	this->position = position;
	this->shooter = shooter;
	switch (shooter)
	{
	case origin::PLAYER:
		this -> color = WHITE;
		break;
	case origin::ENEMY:
		this -> color = RED;
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
}

void Projectile::Move()
{
	switch (shooter)
	{
	case origin::PLAYER:
		position.y += speed;
		break;
	case origin::ENEMY:
		position.y -= speed;
		break;
	}

}


void Projectile::Destroy()
{
	active = false;
	std::cout << "Laser Destroyed" << std::endl;
	//if(position.y > GetScreenHeight() || position.y <= 0)
	//	active = false;
}

Rectangle Projectile::GetRect()
{
	return{position.x,position.y,static_cast<float>(width),static_cast<float>(height) };
}