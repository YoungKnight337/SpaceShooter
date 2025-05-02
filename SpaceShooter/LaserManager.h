#pragma once
#include "raylib.h"
#include "Projectile.h"

class Player player;
class Alien alien;

class LaserManager
{
private:
public:
	LaserManager();
	~LaserManager();
	void Update();
	void Draw();
	void Destroy();
};

