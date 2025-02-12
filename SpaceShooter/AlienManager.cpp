#include "AlienManager.h"

AlienManager::AlienManager()
{

}

AlienManager::~AlienManager()
{

}

void AlienManager::Initialize(Alien& alien, int a, int b)
{
	std::vector<Alien>alien_row;

	for (int i; i < a; i++)
	{
		for (int j; j < b; j++)
		{

		}
		alien_row.push_back(alien);
	}
}

void AlienManager::Draw(int a, int b)
{

}

void AlienManager::Update()
{

}