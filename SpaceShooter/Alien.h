#pragma once
#include "raylib.h"

class Alien
{
private:
	int value;
	int width;
	int height;
	Vector2 position;
	Color color;
	Rectangle model;

public:
	Alien(int value, int width, int height, Vector2 position, Color color, Rectangle model);
	~Alien();
	void Draw();
	void Update();
	void Shoot();
	void GetRect();
};

