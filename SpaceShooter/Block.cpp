#include "Block.h"

Block::Block()
	:health(100), active{ true }, position{position.x, position.y}
{

}

Block::Block(int health, bool active, Vector2 position)
	:health(health), active{ active }, position {position}
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

void Block::Update()
{
	CheckCollision(laser);
}

void Block::CheckCollision()
{
	if (!active) return;
	if (CheckCollisionRecs(GetRect(),	Projectile().GetRect()))
	{
		health -= 10;
	}
	if (health <= 0)
	{
		active = false;
	}

}


Rectangle Block::GetRect() 
{
	return {position.x, position.y, static_cast<float>(width), static_cast<float>(height)};
}