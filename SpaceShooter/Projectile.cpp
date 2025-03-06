#include "Projectile.h"

Projectile::Projectile()
	:width{10},height{10},speed{5.0f},active{false},color{}
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

void Projectile::Update()
{
	//Move
	//CheckCollision
}

void Projectile::Move()
{
	//if(active == true){ }
	//	If origin is ship
	//		Move up position.y += speed.y;
	//	If origin is alien
	//		Move down position.y -= speed.y;
}
void Projectile::CheckCollision(Player& ship, Alien& alien)
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
	return{position.x,position.y,static_cast<float>(width),static_cast<float>(height) };
}