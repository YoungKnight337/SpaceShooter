#include "LaserManager.h"

LaserManager::LaserManager()
{

}

LaserManager::~LaserManager()
{

}

void LaserManager::Update(Player& player)
{
	for(auto& Projectile : player.lasers)
	{ 
		Projectile.Update(player);
	}
	/*
		for(auto& Projectile : alien.beams)
		{
			Projectile.Update();
		}
	*/

	DeleteLasers(player);
}

void LaserManager::Draw(Player& player)
{
	for (auto& Projectile : player.lasers)
	{
		Projectile.Draw();
	}
	/*
		for (auto& Projectile : alien.lasers)
		{
			Projectile.Draw();
		}
	*/
}


void LaserManager::DeleteLasers(Player& player)
{
	for (auto it = player.lasers.begin(); it != player.lasers.end(); )
	{
		if (!it->active)
		{
			it = player.lasers.erase(it);
		}
		else
		{
			++it;
		}
	}
}

