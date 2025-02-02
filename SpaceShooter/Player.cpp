#include "Player.h"

Player::Player()
{
	position.x = static_cast<float>(GetScreenWidth()) / 2.f;
	position.y = static_cast<float>(GetScreenHeight()) * 7 / 8.f;
}

Player::~Player()
{

}


void Player::Shoot()
{
	if (IsKeyDown(KEY_SPACE))
		;
}

void Player::Draw()
{
	DrawRectangle(position.x, position.y, width, height, color);
}

void Player::Update()
{
	if (IsKeyDown(KEY_LEFT))
		position.x -= 5;
	if (IsKeyDown(KEY_RIGHT))
		position.x += 5;
}

void Player::GetRect()
{

}