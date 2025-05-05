#include "LaserManager.h"

LaserManager::LaserManager()
{

}

LaserManager::~LaserManager()
{

}

void LaserManager::Update()
{
	for(auto& Projectile : Player().lasers)
	{ 
		Projectile.Update();
	}

	/*
		for(aut& Projectile : Alien().beams)
		{
			Projectile.Update();
		}
	*/
}

void LaserManager::Draw()
{
	for (auto& Projectile : Player().lasers)
	{
		Projectile.Draw();
	}
	/*
		for (auto& Projectile : Alien().lasers)
		{
			Projectile.Draw();
		}
	*/
}
