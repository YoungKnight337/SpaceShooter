#pragma once
#include "vector"
#include "raylib.h"
#include "Projectile.h"

class Alien;
class Projectile;

class Player
{
private:
	int width;
	int height;
	int lives;
	int score;
	float speed;
	bool active;
	std::vector<Projectile>laser;
	Vector2 position;
	Color color;
	

public:
	Player(int width,int height, int lives, float speed,bool active, Color color);
	~Player();
	void Draw();
	void Update(Projectile&laser);
	void Shoot(Projectile &laser);
	void CheckCollision(Projectile& laser);
	void LimitMovement();
	Rectangle GetRect();
	
};

