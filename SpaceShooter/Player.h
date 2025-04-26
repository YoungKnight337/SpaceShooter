#pragma once
#include "vector"
#include "raylib.h"
#include "Projectile.h"

class Projectile beam;

class Player
{
private:
	int height = 35;
	int width = 35;
	bool active = true;
	double lastFireTime;

	Vector2 position;
	Color color = WHITE;
	

public:	
	Player();
	//Player(Vector2 position, bool active);
	~Player();
	void Draw();
	void Update(); //Projectile& laser
	void Shoot();
	void CheckCollision(Projectile& laser);
	void LimitMovement();
	void Reset();
	Vector2 GetPosition() { return position; }
	Rectangle GetRect();
	
};

