#pragma once
#include "raylib.h"
#include "Alien.h"
#include "Player.h"

class Player;
class Alien;

class Projectile
{
private:
	int width;
	int height;
	float speed;
	bool active;
	Color color;
	Vector2 position;
public:
	Projectile();
	Projectile(int width, int height, float speed, bool active, Color color);
	~Projectile();
	void Draw();
	void Update(Player& ship, Alien& alien);
	void CheckCollision(Player &ship, Alien &alien);
	void Move(Player& ship, Alien& alien);
	bool CheckStatus() const { return active; }
	Rectangle GetRect();

};

