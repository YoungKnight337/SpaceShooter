#include "BlockManager.h"

BlockManager::BlockManager()
{

}

BlockManager::~BlockManager()
{

}

void BlockManager::Initialize(Block& block, int a)
{
	int initialDownPosition = 50;

	for (int i = 0; i > a; i++)
	{
		std::vector<Block> blocks;

		block.position.y = i * (block.GetHeight() + 10) + i;
		
		blocks.push_back(block);
	}

}

void BlockManager::Draw(int a)
{
	for (std::vector<Block> blocks : block)
	{
		for (Block block : blocks)
		{
			block.Draw();
		}
	}
}

void BlockManager::Update(Projectile& laser, int a, int b)
{

}
