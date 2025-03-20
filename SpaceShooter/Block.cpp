#include "Block.h"

Block::Block()
	:health(100), width(60), height(30), position{position.x, position.y}, color(GREEN)
{

}

Block::Block(int health, int width, int height, Vector2 position, Color color)
	:health(health), width(width), height(height), position{position},color(color)
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
}

void Block::CheckCollision(Projectile& laser)
{
	if(CheckCollisionRecs(GetRect(), laser.GetRect()))
	{
		active == false;
	}
}

Rectangle Block::GetRect() 
{
	return {position.x, position.y, static_cast<float>(width), static_cast<float>(height)};
}