#pragma once
#include "raylib.h"
#include "Projectile.h";

class Projectile;

class Block
{
private:
	int width = 60;
	int height = 60;
	int health = 100;
	bool active;
	Color color = GREEN;
	
	
public:
	Block();
	Block(bool active, Vector2 position);
	~Block();
	void Draw();
	//void TakeDamage(Projectile& laser);
	Vector2 position;
	int GetHeight() const { return height; };
	int GetWidth() const { return width; };
	int GetHealth() { return health; };
	int SetHealth(int health) { return this->health = health; };
	bool SetState(bool active) { return this->active = active; };
	bool GetState() { return active; };
	Color GetColor() const { return color; };
	Color SetColor(Color color) { return this->color = color; };

	Rectangle GetRect();
};

