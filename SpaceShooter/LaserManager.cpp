#include "LaserManager.h"

LaserManager::LaserManager()
{

}

LaserManager::~LaserManager()
{

}

void LaserManager::Update(Projectile& laser)
{
	for(auto& laser : Player().lasers)
	{ 
		laser.Update();
	}
}

void LaserManager::Draw(Projectile& laser)
{
	for (auto& laser : Player().lasers)
	{
		laser.Draw();
	}
}
