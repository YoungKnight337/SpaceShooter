#pragma once
#include "raylib.h"

class Projectile
{
private:
	int width;
	int height;
	float speed;
	bool active;
	Rectangle rect;
	Color color;
public:
	Projectile(int width, int height,float speed, bool active);
	~Projectile();
	void Draw();
	void Update();

};

