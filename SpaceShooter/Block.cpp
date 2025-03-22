#include "Block.h"

Block::Block()
	:health(100), width(60), height(30), active{ true }, position{position.x, position.y}, color(GREEN)
{

}

Block::Block(int health, int width, int height, bool active, Vector2 position, Color color)
	:health(health), width(width), height(height), active{ active }, position {position}, color(color)
{

}

Block::~Block()
{

}

void Block::Draw()
{
	if(active == true)
		DrawRectangle(position.x, position.y, width, height, color);
}

void Block::Update(Projectile& laser)
{
	CheckCollision(laser);
	Destroy();
}

void Block::CheckCollision(Projectile& laser)
{
	if (active == true)
	{
		if (CheckCollisionRecs(GetRect(), laser.GetRect()))
		{
			health -= 10;
		}
	}
}

void Block::Destroy()
{
	if (health <= 0)
	{
		active == false;
	}
}

Rectangle Block::GetRect() 
{
	return {position.x, position.y, static_cast<float>(width), static_cast<float>(height)};
}