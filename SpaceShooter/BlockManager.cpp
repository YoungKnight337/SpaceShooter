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
	for (Block& block : blocks)
	{
		block.Draw();
	}
}

void BlockManager::Update(int a, Player& player)
{
	CheckCollision(player);
	DeleteBlocks();
}

void BlockManager::CheckCollision(Player& player)
{
	for (auto laser : player.lasers)
	{
		auto it = blocks.begin();
		while (it != blocks.end() && it->GetState() == true)
		{
			if (CheckCollisionRecs(it->GetRect(), laser.GetRect()))
			{
				it->TakeDamage();
			}
			if (it->GetHealth() <= 0)
			{
				it->Deactivate();
			}
		}
		
	}
}

void BlockManager::DeleteBlocks()
{
	for (auto it = blocks.begin(); it != blocks.end(); )
	{
		if (it->GetState() == false)
		{
			it = blocks.erase(it);
		}
		else
		{ 
			++it;
		}
	}
}
