#include "Player.h"


Player::Player()
	:position{ position.x, position.y }, width{ 20 }, height{ 20 }, lives{ 3 }, speed{ 5.0f }, active{ true }, color{ WHITE }
{
	position.x = static_cast<float>(GetScreenWidth()) / 2.f;
	position.y = static_cast<float>(GetScreenHeight()) - 100.f;
}
Player::Player(int width, int height, int lives, float speed, bool active, Color color)
	: position{ position }, width{ width }, height{ height }, lives{ lives }, speed{ speed }, active{ active }, color { color}
{

}

Player::~Player()
{

}


void Player::Draw()
{
	if (active == true)
		DrawRectangle(position.x, position.y, width, height, color);
}

void Player::Update(Projectile &laser)
{
	if (IsKeyDown(KEY_LEFT))
		position.x -= 7;
	if (IsKeyDown(KEY_RIGHT))
		position.x += 7;
	if (IsKeyDown(KEY_SPACE))
		Shoot(laser);

	LimitMovement();
}


void Player::LimitMovement()
{
	if (position.x <= 0)
	{
		position.x = 0;
	}
	if (position.x + width >= GetScreenWidth())
	{
		position.x = GetScreenWidth() - width;
	}
}

void Player::Shoot(Projectile& laser)
{
	if (active == true)
	{
		laser.CheckStatus() == true;
		laser.GetRect() = { position.x + width / 2, position.y };
	}
}

void Player::CheckCollision(Projectile & laser)
{
	if (active == true)
	{
		if (CheckCollisionRecs(GetRect(), laser.GetRect()))
		{
			active == false;
		}
	}
}

Rectangle Player::GetRect()
{
	return{ position.x, position.y, static_cast<float>(width),static_cast<float>(height) };
}