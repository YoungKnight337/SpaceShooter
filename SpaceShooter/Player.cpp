#include "Player.h"


Player::Player()
	:height{ 35 }, width{ 35 }, lives{ 3 }, score{ 0 }, speed{ 5.0f }, active{ true }, position{ position.x, position.y }, collider{ collider }, color{ WHITE }
{
	position.x = static_cast<float>(GetScreenWidth()) / 2.f;
	position.y = static_cast<float>(GetScreenHeight()) - 100.f;
	collider = { };

}

Player::Player(int height, int width, int lives, int score, float speed, bool active,  Vector2 collider, Color color)
	:height{ height }, width{ width }, lives{ lives }, score{ score }, speed{ speed }, active{ active }, position{ position }, collider{ collider }, color {
	color
}
{
	
}

//Player(int width,int height, int lives, int score, float speed,bool active, Color color);
//	:position{ position }, width{ width }, height{ height }, lives{ lives }, score{ score }, 
//	speed{ speed }, active{ active }, color{ color }
//	{
//	}

Player::~Player()
{

}


void Player::Draw()
{
	//(x,y+h/2),(x-w/2,y-h/2),(x+w/2,y-h/2) = used here
	//(x,y), (x + w / 2, y + h), (x + w, y)

	p1 = { position.x, position.y + height / 2 };
	p2 = { position.x + width / 2, position.y - height / 2 };
	p3 = { position.x - width / 2, position.y - height / 2 };


	if (active == true)
		DrawTriangle(p1, p2, p3, color);
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
		/*
		if (CheckCollisionRecs(GetRect(), laser.GetRect()))
		{
			active == false;
		}
		*/
	}
}

/*Rectangle Player::GetRect()
{
	return{ position.x, position.y, static_cast<float>(width),static_cast<float>(height) };
}
*/