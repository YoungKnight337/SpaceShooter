#pragma once
#include "raylib.h"

class Projectile
{
private:
	int width;
	int height;
	float speed;
	bool active;
	Color color;
	Vector2 position;
public:
	Projectile(int width, int height,float speed, bool active);
	~Projectile();
	void Draw();
	void Update();
	Rectangle GetRect();

};

