#pragma once
#include "raylib.h"
#include "Projectile.h";

class Projectile;

class Block
{
private:
	int width;
	int height;
	Vector2 positon;
	Color color;

public:
	Block();
	~Block();
	void Draw();
	void Update(Projectile& laser);
	void CheckCollision(Projectile& laser);
	Rectangle GetRect();
};

