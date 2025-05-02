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
	for (auto& Projectile : player.laser)
	{
		Projectile.Draw();
	}
}