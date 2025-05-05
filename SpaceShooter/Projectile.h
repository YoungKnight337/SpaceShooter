#pragma once
#include "raylib.h"
#include "Alien.h"
#include "Player.h"
#include "Block.h"

class Player;
class Alien;
class Block;

enum class origin
{
	PLAYER = 0,
	ENEMY = 1
};


class Projectile
{
private:
	int width = 4;
	int height = 15;
	int speed;
	bool active = false;
	origin shooter;
	Color color;
	Vector2 position;


public:
	Projectile();
	Projectile(bool active, int speed, Vector2 position, origin shooter);
	~Projectile();
	// void Projectile::Initialize(Player player)
	void Draw();
	void Update();
	void Destroy();
	void Move();
	bool CheckStatus() const { return active; }
	Rectangle GetRect();

};

