#pragma once
#include "raylib.h"
#include "vector"
#include "Alien.h"
#include "Projectile.h"

class Alien;
class Projectile;

class AlienManager
{
private:
	std::vector<std::vector<Alien>>aliens;
public:
	AlienManager();
	~AlienManager();
	void Initialize(Alien &alien, int a, int b);
	void Draw(int a, int b);
	void Update(Projectile &laser);
	void MoveAliens();
};

