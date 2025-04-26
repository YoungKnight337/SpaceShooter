#pragma once
#include "raylib.h"
#include "Alien.h"
#include "Player.h"
#include "Block.h"

class Player;
class Alien;
class Block;

class Projectile
{
private:
	int width = 4;
	int height = 15;
	int speed;
	bool active;
	Color color;
	Vector2 position;


public:
	Projectile();
	Projectile(bool active, int speed, Vector2 position, Color color);
	~Projectile();
	// void Projectile::Initialize(Player player)
	void Draw(Player player);
	void Update(Player& ship, Alien& alien, Block& block);
	void Destroy(Player &ship, Alien &alien, Block& block);
	void Move();
	bool CheckStatus() const { return active; }
	/*enum type
	{
		ENEMY = 1,
		PLAYER = 2
	};
	*/
	Rectangle GetRect();

};

