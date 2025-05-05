#pragma once
#include "raylib.h"
#include "Projectile.h"
#include "Player.h"
#include "Alien.h"

class Player;
class Alien;

class LaserManager
{
private:
	Player player;
	Alien alien;
public:
	LaserManager();
	~LaserManager();
	void Update();
	void Draw();

};

