#include "Projectile.h"

Projectile::Projectile(int width, int height, float speed, bool active)
{

}

Projectile::~Projectile()
{

}

void Projectile::Draw()
{

}

void Projectile::Update()
{

}

Rectangle Projectile::GetRect()
{
	return{ position.x,position.y,static_cast<float>(width),static_cast<float>(height) };
}