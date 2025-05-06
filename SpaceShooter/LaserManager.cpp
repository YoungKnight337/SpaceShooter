#include "LaserManager.h"

LaserManager::LaserManager()
{

}

LaserManager::~LaserManager()
{

}

void LaserManager::Update()
{
	for(auto& Projectile : player.lasers)
	{ 
		Projectile.Update();
	}

	/*
		for(auto& Projectile : alien.beams)
		{
			Projectile.Update();
		}
	*/
}

void LaserManager::Draw()
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

/*
void LaserManager::DeleteLasers()
{
	for (auto it = player.lasers.begin(); i != player.lasers.end(); )
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
*/
