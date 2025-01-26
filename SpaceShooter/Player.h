#pragma once
#include "raylib.h"

class Player
{
private:
	int lives;
	int score;
	float speed;
	float firerate;
	Vector2 position;
	Color color;

public:
	Player();
	~Player();
	void Draw();
	void Update();
	void Shoot();
};

