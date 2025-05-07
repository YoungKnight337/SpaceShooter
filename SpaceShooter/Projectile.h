#pragma once
#include "raylib.h"
#include "Alien.h"
#include "Player.h"
#include "Block.h"
#include <iostream>

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
	origin shooter;
	Color color;
	Vector2 position;

public:
	Projectile();
	Projectile(bool active, int speed, Vector2 position, origin shooter);
	~Projectile();
	bool active;
	void Draw();
	void Update(Player& player);
	void Destroy(Player& player);
	void Move();
	bool CheckStatus() const { return active; }
	Rectangle GetRect();

};

