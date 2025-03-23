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
	Color color;
	

public:
	Vector2 position;
	Block();
	Block(int health, int width, int height, bool active, Vector2 position, Color color);
	~Block();
	int GetHeight() const { return height; };
	int GetWidth() const { return width; };
	void Draw();
	void Update(Projectile& laser);
	void CheckCollision(Projectile& laser);
	Rectangle GetRect();
};

