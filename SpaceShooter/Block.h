#pragma once
#include "raylib.h"
#include "Projectile.h";

class Projectile;

class Block
{
private:
	int health;
	int width;
	int height;
	bool active;
	Vector2 position;
	Color color;
	

public:
	Block();
	Block(int health, int width, int height, Color color);
	~Block();
	int GetHeight() const { return height; };
	void Draw();
	void Update(Projectile& laser);
	void CheckCollision(Projectile& laser);
	Rectangle GetRect();
};

