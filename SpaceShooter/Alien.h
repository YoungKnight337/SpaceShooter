#pragma once
#include "vector"
#include "raylib.h"
#include "Projectile.h"

class Projectile;

enum class type
{
	OCTOPUS,
	SQUID,
	CRAB
};

class Alien
{
private:
	int value;
	int width = 20;
	int height = 20;
	bool active;
	type alienType;
	Vector2 position;
	Color color;

public:
	Alien();
	Alien(bool active, type alienType);
	~Alien();
	void Draw();
	void Update();
	void Shoot();
	void CheckCollision();
	//void GetPosition();
	int GetHeight() const { return height; };
	int GetWidth() const { return width; };
	std::vector<Projectile>beams;
	Rectangle GetRect();
};

