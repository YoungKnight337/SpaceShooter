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
	float speed = 2.0f;
	Vector2 position;
	std::vector<std::vector<Alien>>aliens;

public:
	AlienManager();
	~AlienManager();
	void Initialize(Alien &alien, int a, int b); //void Initialize(size_t a, size_t b);
	void Draw(int a, int b); //void Draw(size_r a, size_t b);
	void Update();
	void Move();
	void MoveAliens();
};

