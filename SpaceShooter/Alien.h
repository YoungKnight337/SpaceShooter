#pragma once
#include "raylib.h"

class Alien
{
private:
	int value;
	Vector2 postion;
	Color color;

public:
	Alien();
	~Alien();
	void Draw();
	void Update();
	void Shoot();
};

