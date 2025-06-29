#include "Alien.h"

Alien::Alien()
	//:value{ }, active{ true }, color{}, alienType{}
{

}
Alien::Alien(bool active, type alienType)
	//:value{value}, active{ active }, color{ color }
{
	this->active = active;
	this->alienType = alienType;
	switch (alienType)
	{
	case type::OCTOPUS:
		color = WHITE;
		value = 30;
		break;
	case type::SQUID:
		color = GREEN;
		value = 20;
		break;
	case type::CRAB:
		color = BLUE;
		value = 10;
		break;
	}

}

Alien::~Alien()
{

}

void Alien::Draw()
{
	if(active)
		DrawRectangle(position.x, position.y, width, height, color);
}


void  Alien::Update()
{
	CheckCollision();
	//Shoot();
}

void Alien::Shoot()
{ 
	std::uniform_real_distribution<double>(2.0, 6.0);
	// Timing seems to be random
	// Make sure that no alien is in the way of line of fire
	double lastFireTime = 0.0;
	if(GetTime())
		beams.push_back(Projectile(true, 7, {position.x, position.y}, origin::ENEMY));
		lastFireTime = GetTime();
		std::cout << "Alien shooting" << std::endl;
}

void Alien::CheckCollision()
{
	if (!active) return;
	if (CheckCollisionRecs(GetRect(),Projectile().GetRect()))
	{
		active = false;
		std::cout << "Alien hit" << std::endl;
	}
}

Rectangle Alien::GetRect()
{
	return{ position.x,position.y, static_cast<float>(width),static_cast<float>(height) };
}
