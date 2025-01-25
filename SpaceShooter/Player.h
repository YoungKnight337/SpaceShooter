#pragma once
#include "raylib.h"

class Player
{
private:
	int lives;
	int score;
	float speed;
	float firerate;
public:
	Player();
	~Player();
	void Draw();
	void Update();
	void MoveLeft();
	void MoveRight();
	void Shoot();
};

