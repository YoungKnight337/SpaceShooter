#pragma once
#include "vector"
#include "raylib.h"
#include "Projectile.h"
#include "Player.h"

class Player;
class Projectile;

class Alien
{
private:
	int value;
	int width;
	int height;
	bool active;
	std::vector<Projectile>laser;
	Vector2 position;
	Color color;
	enum types
	{
		SQUID,
		OCTOPUS,
		CRAB
	};
public:
	Alien();
	Alien(int value, int width, int height, bool active, Color color);
	~Alien();
	void Draw();
	void Update(Projectile& laser);
	void Shoot(Projectile& laser);
	void CheckCollision(Projectile& laser);
	void GetPosition();
	int GetHeight() const { return height; };
	int GetWidth() const { return width; };
	Rectangle GetRect();
};

