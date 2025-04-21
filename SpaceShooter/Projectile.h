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
	int width;
	int height;
	float speed_x;
	float speed_y;
	bool active;

	Vector2 position;


public:
	Projectile();
	Projectile(int width, int height, float speed_x, float speed_y, bool active);
	~Projectile();
	void Initialize(Player player);
	void Draw(Player player);
	void Update(Player& ship, Alien& alien, Block& block);
	void Destroy(Player &ship, Alien &alien, Block& block);
	void Move(Player& ship);
	bool CheckStatus() const { return active; }
	/*enum type
	{
		ENEMY,
		PLAYER 
	};
	*/
	Rectangle GetRect();

};

