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
}

void LaserManager::Draw()
{
	for (auto& Projectile : player.lasers)
	{
		Projectile.Draw();
	}
}

void LaserManager::Destroy()
{
	for (auto& Projectile : player.lasers)
	{
		Projectile.Destroy();
	}
}