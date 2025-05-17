#include "Block.h"

Block::Block()
	:active{ true }, position{position.x, position.y}
{

}

Block::Block(bool active, Vector2 position)
	:active{ active }, position {position}
{

}

Block::~Block()
{

}

void Block::Draw()
{
	if(active)
		DrawRectangle(position.x, position.y, width, height, color);
}

/*
void Block::Update()
{
	CheckCollision();
}
*/

/* void Block::TakeDamage(Projectile& laser)
{
	if(CheckCollisionRecs(GetRect(),laser.GetRect()))
	{
		color = RED;
		health -= 10;
		std::cout << "Bunker hit" << std::endl;
	}
	if (health <= 0)
		active = false;
}
*/

/*void Block::Deactivate()
{
	active = false;
}
*/

Rectangle Block::GetRect() 
{
	return {position.x, position.y, static_cast<float>(width), static_cast<float>(height)};
}