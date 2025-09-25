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
	for (auto& Projectile : player.lasers)
	{
		for (auto& Block : blockmanager.blocks)
		{
			if (CheckCollisionRecs(Projectile.GetRect(), Block.GetRect()))
			{
				Projectile.Destroy();
			}
		}

		if (Projectile.GetRect().y > GetScreenHeight() || Projectile.GetRect().y <= 0)
		{
			Projectile.Destroy();
		}
	}
	std::cout << "LaserManager::CollisionCheck()" << std::endl;
}

void LaserManager::Draw(Player& player)
{
	for (auto& Projectile : player.lasers)
	{
		Projectile.Draw();
	}

	/*for (auto& Projectile : alien.beams)
	{
		Projectile.Draw();
	}
	*/
	std::cout << "LaserManager::Draw()" << std::endl;
}

//Where the game likely crashes
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

	std::cout << "LaserManager::DeleteLasers()" << std::endl;
}


