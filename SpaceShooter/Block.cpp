#include "Block.h"

Block::Block()
	:width(20), height(20), color(GREEN)
{

}

Block::Block(int width, int height, Color color)
	: width(width), height(height), color(color)
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
		//Destroy block
		//Destroy laser
	}
}

Rectangle Block::GetRect() 
{
	return {position.x, position.y, static_cast<float>(width), static_cast<float>(height)};
}