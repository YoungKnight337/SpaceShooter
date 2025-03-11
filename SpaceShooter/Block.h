#pragma once
#include "raylib.h"
#include "Projectile.h";

class Projectile;

class Block
{
private:
	int width;
	int height;
	Vector2 position;
	Color color;
	bool active;

public:
	Block();
	~Block();
	int GetHeight() const { return height; };
	void Draw();
	void Update(Projectile& laser);
	void CheckCollision(Projectile& laser);
	Rectangle GetRect();
};

