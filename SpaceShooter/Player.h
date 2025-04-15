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
	
	std::vector<Projectile>laser;

	Vector2 position;
	Vector3 collider;
	Vector2 p1;
	Vector2 p2;
	Vector2 p3;
	Color color;
	

public:	
	Player();
	Player(int width,int height, int lives, int score, float rotation, float speed,bool active, Vector3 collider, Color color);
	~Player();
	void Draw();
	void Update(Projectile&laser);
	void Shoot(Projectile &laser);
	void CheckCollision(Projectile& laser);
	void LimitMovement();
	Rectangle GetRect();
	
};

