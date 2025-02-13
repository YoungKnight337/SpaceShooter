#pragma once
#include "raylib.h"

class Alien
{
private:
	int value;
	int width;
	int height;
	bool active;
	Vector2 position;
	Color color;
public:
	Alien();
	Alien(int value, int width, int height, bool active, Color color);
	~Alien();
	void Draw();
	void Update();
	void Shoot();
	Rectangle GetRect();
};

