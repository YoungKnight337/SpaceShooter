#include "LaserManager.h"

LaserManager::LaserManager()
{

}

LaserManager::~LaserManager()
{

}

void LaserManager::Update()
{
	for(Projectile& lasers: laser)
	{ 
		laser.Update();
	}
}

void LaserManager::Draw()
{
	for (Projectile& laser : laser)
	{
		laser.Draw();
	}
}