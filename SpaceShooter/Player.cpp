#include "Player.h"

Player::Player()
{

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

}

void Player::Update()
{
	if (IsKeyDown(KEY_LEFT))
		position.x -= 5;
	if (IsKeyDown(KEY_RIGHT))
		position.x += 5;
}