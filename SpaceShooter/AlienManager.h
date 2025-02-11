#pragma once
#include "raylib.h"
#include "Alien.h"

class Alien;

class AlienManager
{
private:
	Alien[][];
public:
	AlienManager();
	~AlienManager();
	void Initialize(Alien &alien, int a, int b);
	void Draw();
	void Update();
};

