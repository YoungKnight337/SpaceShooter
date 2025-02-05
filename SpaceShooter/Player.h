#pragma once
#include "raylib.h"


class Projectile;

class Player
{
private:
	int width;
	int height;
	int lives;
	int score;
	float speed;
	Vector2 position;
	Color color;
	

public:
	Player();
	~Player();
	void Draw();
	void Update();
	void Shoot(Projectile &laser);
	void LimitMovement();
	Rectangle GetRect();
	
};

