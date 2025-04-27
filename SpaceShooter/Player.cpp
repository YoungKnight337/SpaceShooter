#include "Player.h"


Player::Player()
{
	position.x = static_cast<float>(GetScreenWidth()) / 2.f;
	position.y = static_cast<float>(GetScreenHeight()) - 100.f;
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

	Vector2 p1 = { position.x, position.y + height / 2 };
	Vector2 p2 = { position.x + width / 2, position.y - height / 2 };
	Vector2 p3 = { position.x - width / 2, position.y - height / 2 };


	if(active == true)
		DrawTriangle(p1, p2, p3, color);
}

//Projectile& laser
void Player::Update()
{
	if (!active) return;
	if (IsKeyDown(KEY_LEFT))
		position.x -= 7;
	if (IsKeyDown(KEY_RIGHT))
		position.x += 7;
	if (IsKeyDown(KEY_SPACE))
		Shoot();

	LimitMovement();
	CheckCollision();
	//Reset();
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

//Logic based from 3eyesTien
void Player::Shoot() 
{
	std::vector<Projectile>lasers;
	if(GetTime() - lastFireTime >= 0.25)
		lasers.push_back(Projectile(true, 7, { position.x + width / 4, position.y },WHITE));
		lastFireTime = GetTime();
}

//SCREW IT USING RECTANGLE COLLDIER
void Player::CheckCollision()
{
	if (CheckCollisionRecs(GetRect(), Projectile().GetRect()))
	{
		active = false;
	}

}

void Player::Reset()
{
	if (!active)
	{
		position.x = static_cast<float>(GetScreenWidth()) / 2.f;
		position.y = static_cast<float>(GetScreenHeight()) - 100.f;
		active = true;
	}

}

Rectangle Player::GetRect()
{
	return{ position.x, position.y, static_cast<float>(width),static_cast<float>(height) };
}

