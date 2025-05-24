#include "LaserManager.h"

LaserManager::LaserManager()
{

}

LaserManager::~LaserManager()
{

}

void LaserManager::Update(Player& player, BlockManager& blockmanager)
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
	CheckCollision(player, blockmanager);
	DeleteLasers(player);
}

void LaserManager::CheckCollision(Player& player, BlockManager& blockmanager)
{
	for (auto& Block: blockmanager.blocks)
	{
		for (auto& Projectile: player.lasers)
		{	
			Projectile.Destroy(player, Block);
		}
	}
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

