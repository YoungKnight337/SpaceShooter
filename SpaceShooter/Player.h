#pragma once
#include "raylib.h"

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
	Rectangle model;

public:
	Player();
	~Player();
	void Draw();
	void Update();
	void Shoot();
	void GetRect();
	void LimitMovement();
};

