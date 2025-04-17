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
	//float offset = 0.0f;

	for (int i = 0; i < a; i++)
	{
		block.position.y = 500;
		block.position.x = i * (block.GetWidth() + 80) + 140;
		
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

