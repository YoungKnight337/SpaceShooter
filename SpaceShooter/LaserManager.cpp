#include "LaserManager.h"

LaserManager::LaserManager()
{

}

LaserManager::~LaserManager()
{

}

void LaserManager::Update()
{
	for(auto& Player : lasers)
	{ 
		laser.Update();
	}
}

void LaserManager::Draw()
{
	for (auto &laser : laser)
	{
		laser.Draw();
	}
}