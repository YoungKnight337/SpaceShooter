#pragma once
#include "raylib.h"
#include "Projectile.h"

class Player;

class LaserManager
{
private:
public:
	LaserManager();
	~LaserManager();
	void Update();
	void Draw();

};

