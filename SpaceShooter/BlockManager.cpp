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

		//block.position.x = j * (block.GetWidth() + 10) + j;
		block.position.y = i * (block.GetHeight() + 10) + i;

		blocks.push_back(blocks);
	}
}

void BlockManager::Draw(int a)
{
	for (std::vector<Block> blocks : blocks)
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
