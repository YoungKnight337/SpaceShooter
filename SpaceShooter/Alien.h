#pragma once
#include "raylib.h"

class Player;
class Projectile;

class Alien
{
private:
	int value;
	int width;
	int height;
	bool active;
	Vector2 position;
	Color color;
public:
	Alien();
	Alien(int value, int width, int height, bool active, Color color);
	~Alien();
	void Draw();
	void Update(Player& player);
	void Shoot(Projectile& laser);
	Rectangle GetRect();
};

