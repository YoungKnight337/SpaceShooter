#pragma once
#include "vector"
#include "raylib.h"
#include "Projectile.h"

class Projectile;

class Player 
{
private:
	int height = 35;
	int width = 35;
	int speed = 7;
	int lives = 3;
	double lastFireTime = 0.0;
	bool active = true;

	Vector2 position;
	Color color = WHITE;
	

public:	
	std::vector<Projectile> lasers;
	Player();
	//Player(Vector2 position, bool active);
	~Player();
	void Draw();
	void Update(); //Projectile& laser
	void Shoot();
	void CheckCollision();
	void LimitMovement();
	void Reset();
	Vector2 GetPosition() { return position; }
	Rectangle GetRect();
	
};

