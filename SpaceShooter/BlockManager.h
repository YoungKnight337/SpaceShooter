#pragma once
#include <vector>
#include "raylib.h"
#include "Block.h"


class BlockManager
{
private:
	std::vector<Block> blocks;
public:
	BlockManager();
	~BlockManager();
	void Initialize(int a, int b);
	void Draw(int a);
	void Update(int a, Player& player);
	void CheckCollision(Player& player);
	void DeleteBlocks();
	
};

