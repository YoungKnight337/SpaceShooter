#pragma once
#include "raylib.h"

class Player
{
private:
	int lives;
	float speed;
public:
	Player();
	~Player();
	void Draw();
	void Update();
	void MoveLeft();
	void MoveRight();
	void Shoot();
};

