#include "AlienManager.h"

AlienManager::AlienManager()
{

}

AlienManager::~AlienManager()
{

}

void AlienManager::Initialize(Alien& alien, int a, int b)
{

	for (int i = 0; i < a; i++)
	{
		std::vector<Alien>alien_row;

		for (int j = 0; j < b; j++)
		{
			if (i == 0)
				Alien(10, 10, 10, true, WHITE);
			if (i == 1 || i == 2)
				Alien(10, 10, 10, true, GREEN);
			if (i == 3)
				Alien(10, 10, 10, true, BLUE);
			
			alien_row.push_back(alien);
		}
		alien_row.push_back(alien_row);
	}
}

void AlienManager::Draw(int a, int b)
{

}

void AlienManager::Update()
{

}