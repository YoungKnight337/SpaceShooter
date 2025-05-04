#pragma once
#include "vector"
#include "raylib.h"
#include "Projectile.h"

class Projectile;

class Alien
{
private:
	int value;
	int width = 20;
	int height = 20;
	bool active;
	enum types
	{
		SQUID,
		OCTOPUS,
		CRAB
	};
	Vector2 position;
	Color color;

public:
	Alien();
	Alien(int value, bool active, Color color);
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

