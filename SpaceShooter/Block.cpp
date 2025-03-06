#include "Block.h"

Block::Block()
{

}

Block::~Block()
{

}

void Block::Draw()
{

}

void Block::Update()
{

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