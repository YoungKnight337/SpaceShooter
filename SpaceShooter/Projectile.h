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
	float speed;
	bool active;
	Color color;
	Vector2 position;
	enum type
	{
		ENEMY,
		PLAYER
	};
public:
	Projectile();
	Projectile(int width, int height, float speed, bool active, Color color);
	~Projectile();
	void Draw();
	void Update(Player& ship, Alien& alien, Block& block);
	void CheckCollision(Player &ship, Alien &alien, Block& block);
	void Vanish();
	void Move(Player& ship, Alien& alien);
	bool CheckStatus() const { return active; }
	Rectangle GetRect();

};

