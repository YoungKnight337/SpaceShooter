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
	float speed;
	Vector2 position;
	std::vector<std::vector<Alien>>aliens;
	enum types
	{
		SQUID,
		OCTOPUS,
		CRAB
	};
public:
	AlienManager();
	AlienManager(float speed, Vector2 position);
	~AlienManager();
	void Initialize(Alien &alien, int a, int b);
	void Draw(int a, int b);
	void Update(Projectile& laser, Alien& alien);
	void Move();
	//void MoveRight();
	void MoveAliens(Alien& alien);
};

