#include "Player.h"


Player::Player()
	:height{ 35 }, width{ 35 }, lives{ 3 }, score{ 0 }, rotation{ 0 }, 
	speed {5.0f}, active{ true }, position{ position.x, position.y }, collider{ collider }, color{ WHITE }
{
	position.x = static_cast<float>(GetScreenWidth()) / 2.f;
	position.y = static_cast<float>(GetScreenHeight()) - 100.f;
	collider = {position.x, position.y - 2.0f , 12};

}

Player::Player(int height, int width, int lives, int score, float rotation, float speed, bool active,  Vector3 collider, Color color)
	:height{ height }, width{ width }, lives{ lives }, score{ score }, rotation{ rotation },
	speed {speed}, active{ active }, position{ position }, collider{ collider }, color {color}
{
	
}


Player::~Player()
{

}


void Player::Draw()
{
	//Triangle Formula 1
	//(x,y+h/2),(x-w/2,y-h/2),(x+w/2,y-h/2) used for function 
	
	//Triangle Formula 2
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
	CheckCollision(laser);	
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
	if (active && laser.CheckStatus() == false)
	{
		lasers.push_back(laser);
		//laser.CheckStatus() == true;
		//laser.Initialize(*this);
	}

		//laser.GetRect() = { position.x + width / 2, 
		//position.y };
		//Projectile::type::PLAYER;
}

//SCREW IT USING RECTANGLE COLLDIER
void Player::CheckCollision(Projectile& laser)
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
