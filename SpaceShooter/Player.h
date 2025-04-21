#pragma once
#include "vector"
#include "raylib.h"
#include "Projectile.h"

class Alien;
class Projectile;

class Player
{
private:
	int height;
	int width;
	int lives;
	int score;
	float rotation;
	float speed;
	bool active;

	Vector2 position;
	Vector3 collider;
	Color color;
	

public:	
	Player();
	Player(int width,int height, int lives, int score, float rotation, float speed,bool active, Color color);
	~Player();
	void Draw();
	void Update(Projectile&laser);
	void Shoot();
	void CheckCollision(Projectile& laser);
	void LimitMovement();
	Vector2 GetPosition() { return position; }
	Rectangle GetRect();
	
};

