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
	Block();
	Block(bool active, Vector2 position);
	~Block();
	void Draw();
	void TakeDamage();
	void Deactivate();
	//void Update();
	//void CheckCollision();
	Vector2 position;
	int GetHeight() const { return height; };
	int GetWidth() const { return width; };
	//bool SetState(bool active) { this->active = active; };
	bool GetState() { return active; };
	//int SetHealth(int health) { this->health = health; };
	int GetHealth() { return health; };
	Color GetColor() { return color; };
	Rectangle GetRect();
};

