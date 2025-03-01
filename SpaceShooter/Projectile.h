#pragma once
#include "raylib.h"
#include "Alien.h"
#include "Player.h"

class Projectile
{
private:
	int width;
	int height;
	float speed;
	bool active;
	Color color;
	Vector2 position;
public:
	Projectile(int width, int height, float speed, bool active,Color color);
	~Projectile();
	void Draw();
	void Update();
	void CheckCollision(Player &ship, Alien &alien);
	void Move();
	Rectangle GetRect();

};

