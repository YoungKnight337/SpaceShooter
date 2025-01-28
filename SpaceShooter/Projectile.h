#pragma once
#include "raylib.h"

class Projectile
{
private:
	float speed;
	Rectangle rect;
	Color color;
public:
	Projectile();
	~Projectile();
	void Draw();
	void Update();

};

