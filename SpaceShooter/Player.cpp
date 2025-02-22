#include "Player.h"

Player::Player(int width, int height, int lives, float speed, Color color)
{
	position.x = static_cast<float>(GetScreenWidth()) / 2.f;
	position.y = static_cast<float>(GetScreenHeight()) * 7 / 8.f;
}

Player::~Player()
{

}


void Player::Draw()
{
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
	
}

Rectangle Player::GetRect()
{
	return{ position.x, position.y,static_cast<float>(width),static_cast<float>(height) };
}