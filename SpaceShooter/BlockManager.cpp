#include "BlockManager.h"

BlockManager::BlockManager()
{

}

BlockManager::~BlockManager()
{

}

void BlockManager::Initialize(int a)
{
	for (int i = 0; i < a; i++)
	{
		block.position.y = 500;
		block.position.x = i * (block.GetWidth() + 80) + 140;
		
		blocks.push_back(block);
	}

}

void BlockManager::Draw(int a)
{
		for (Block block : blocks)
		{
			block.Draw();
		}
}

void BlockManager::Update(int a)
{
	for (Block& block : blocks)
	{
		block.Update();
	}
}

void BlockManager::CheckCollision(Player& player)
{
	for (auto laser : player.lasers)
	{
		for (auto& block : blocks)
		{
			if (CheckCollisionRecs(block.GetRect(), laser.GetRect()))
			{
				block.color = RED;
				block.health -= 10;
				std::cout << "Bunker hit" << std::endl;
			}
			if (block.health <= 0)
			{
				block.active = false;
			}
		}
	}
}

void BlockManager::DeleteBlocks()
{
	for (auto it = blocks.begin(); it != blocks.end(); )
	{
		if (it->active == false)
		{
			it = blocks.erase(it);
		}
		else
		{ 
			++it;
		}
	}
}