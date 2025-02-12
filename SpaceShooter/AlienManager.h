#pragma once
#include "raylib.h"
#include "Alien.h"
#include "vector"

class Alien;

class AlienManager
{
private:
	std::vector<std::vector<Alien>>aliens;
public:
	AlienManager();
	~AlienManager();
	void Initialize(Alien &alien, int a, int b);
	void Draw(int a, int b);
	void Update();
};

