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
	Vector2 position;
	Color GetColor() const { return color; }
	int GetHeight() const { return height; };
	int GetWidth() const { return width; };
	int GetHealth() { return health; };
	bool GetState() { return active; };
	void Draw();
	void TakeDamage(Projectile& laser);
	//int SetHealth(int health) { return this->health = health; };
	//bool SetState(bool active) { return this->active = active; };;
	//Color SetColor(Color color) { return this->color = color; };

	Rectangle GetRect();
};

