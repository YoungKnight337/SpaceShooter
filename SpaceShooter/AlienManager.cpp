#include "AlienManager.h"

AlienManager::AlienManager()
	:speed{ 2.0f }, position{ position.x, position.y }
{

}

AlienManager::~AlienManager()
{

}

void AlienManager::Initialize(Alien& alien, int a, int b)
{
	std::vector<Alien>alien_row;
	//Alien alien[11];
	//for(int i = 0; i < rows; i++)
	for (int i = 0; i < a; i++)
	{
		//for(int j = 0; j < cols; j++)
		for (int j = 0; j < b; j++)
		{
			if (i == 0)
				Alien octopus(true, type::OCTOPUS);
				position.x = j * (alien.GetWidth() + 10) + j;
				position.y = i * (alien.GetHeight() + 10) + i;
			if (i == 1 || i == 2)
				Alien squid (true, type::SQUID);
				position.x = j * (alien.GetWidth() + 10) + j;
				position.y = i * (alien.GetHeight() + 10) + i;
			if (i == 3)
				Alien crab (true, type::CRAB);
				position.x = j * (alien.GetWidth() + 10) + j;
				position.y = i * (alien.GetHeight() + 10) + i;
			
			alien_row.push_back(alien);
		}
		//alien_row.push_back(alien_row);
	}
}

void AlienManager::Draw(int a, int b)
{
	//for(size_t i =0; i < rows; i++)
	for (std::vector<Alien> alien_row : aliens)
	{
		for(Alien alien: alien_row)
		{ 
			alien.Draw();
		}
	}
	std::cout << "AlienManager::Draw()\n";
}

void AlienManager::Update()
{
	//for(size_t i =0; i < rows; i++)
	for (std::vector<Alien>& alien_row : aliens)
	{
		//for(size_t j = 0; j <cols ; j++)
		for (Alien& alien : alien_row)
		{
			alien.Update();
		}
	}
	MoveAliens();
	std::cout << "AlienManager::Update()\n";
}

void AlienManager::Move()
{
	if(position.x >= 0)
		position.x += speed;
	if (position.x >= GetScreenWidth())
		position.x -= speed;
	std::cout << "AlienManager::Move()\n";
}

void AlienManager::MoveAliens()
{
	//for(size_t i = 0; i < rows; i++)
	for (auto& alien : aliens)
	{
		Move();
		if (position.x >= GetScreenWidth() || position.x >= 0)
		{
			position.y -= 4;
		}
	}
	std::cout << "AlienManager::MoveAliens()\n";
}



