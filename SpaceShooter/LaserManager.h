#pragma once
#include "raylib.h"
#include "Projectile.h"
#include "Player.h"
#include "Alien.h"
#include "BlockManager.h"

class BlockManager;
class Player;
class Alien;

class LaserManager
{
private:
	
public:
	LaserManager();
	~LaserManager();
	void Update(Player& player, BlockManager& blockmanager);
	void CheckCollision(Player& player, BlockManager& blockmanager);
	void Draw(Player& player);
	void DeleteLasers(Player& player);

};

