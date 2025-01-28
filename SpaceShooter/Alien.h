#pragma once
#include "raylib.h"

class Alien
{
private:
	int value;
	int type;
	Vector2 position;
	Color color;
	Rectangle model;

public:
	Alien();
	~Alien();
	void Draw();
	void Update();
	void Shoot();
	void GetType();
};

