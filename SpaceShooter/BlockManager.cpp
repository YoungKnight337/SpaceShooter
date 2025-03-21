#include "BlockManager.h"

BlockManager::BlockManager()
{

}

BlockManager::~BlockManager()
{

}

//Need to fix Blocks need to be initialized in a a typical array/vector positioning vertically is all the same but the horizontal positioning is seperate.
void BlockManager::Initialize(Block& block, int a)
{
	for (int i = 0; i > a; i++)
	{
		position.y = i * (block.GetHeight() + 10) + i;
		block.position.x = (block.GetWidth() + 1);
		
		blocks.push_back(block);
	}

}

void BlockManager::Draw(Block& block, int a)
{
		for (Block block : blocks)
		{
			block.Draw();
		}
}

void BlockManager::Update(Projectile& laser, int a)
{
	for (Block& block : blocks)
	{
		block.Update(laser);
	}
}
