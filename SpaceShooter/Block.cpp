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
	
	}
}

void Block::GetRect()
{
	return { width, height, position.x, position.y };
}