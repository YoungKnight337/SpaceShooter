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
	
public:
	LaserManager();
	~LaserManager();
	void Update(Player& player);
	void Draw(Player& player);
	void DeleteLasers(Player& player);

};

