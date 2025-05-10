#pragma once
#include "raylib.h"
#include "Projectile.h";

class Projectile;

class Block
{
private:
	int health;
	int width = 60;
	int height = 60;
	Color color = GREEN;
	

public:
	bool active;
	Vector2 position;
	Block();
	Block(int health,bool active, Vector2 position);
	~Block();
	int GetHeight() const { return height; };
	int GetWidth() const { return width; };
	void Draw();
	void Update();
	void CheckCollision();
	Rectangle GetRect();
};

