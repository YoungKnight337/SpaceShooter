#include "Block.h"

Block::Block()
{

}

Block::~Block()
{

}

void Block::Draw()
{
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