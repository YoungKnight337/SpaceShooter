#pragma once
#include "raylib.h"
#include "Projectile.h";

class Projectile;

class Block
{
private:
	int health = 100;
	int width = 60;
	int height = 60;
	bool active;
	Color color = GREEN;
	

public:
	Vector2 position;
	Block();
	Block(bool active, Vector2 position);
	~Block();
	int GetHeight() const { return height; };
	int GetWidth() const { return width; };
	void Draw();
	void Update();
	void CheckCollision();
	
	bool GetState() { return active; };
	int GetHealth() { return health; };
	Color GetColor() { return color; };

	Rectangle GetRect();
};

