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
				Alien octpus (10, 10, 10, true, WHITE);
			if (i == 1 || i == 2)
				Alien squid (10, 10, 10, true, GREEN);
			if (i == 3)
				Alien crab (10, 10, 10, true, BLUE);
			
			alien_row.push_back(alien);
		}
		//alien_row.push_back(alien_row);
	}
}

void AlienManager::Draw(int a, int b)
{
	for (std::vector<Alien> alien_row : aliens)
	{
		for(Alien alien: alien_row)
		{ 
			alien.Draw();
		}
	}
}

void AlienManager::Update(Projectile& laser)
{

	for (std::vector<Alien>& alien_row : aliens)
	{
		for (Alien& alien : alien_row)
		{
			alien.Update(laser);
		}
	}
	MoveAliens();
}

void AlienManager::MoveAliens()
{
	//Control
	//Moves down
	// for(int i = 0; i < alien.size(); i++)
	// {
	//		position.x += 5;
	//		if (position.x >= GetScreenWidth())
	//			position.y +=5;
	//		position.x -= 5;
	//		if (position.x <= 0)
	//			position.y -= 5;
	// }
}