#pragma once
#include <vector>
#include "raylib.h"
#include "Block.h"


class BlockManager
{
private:
	const int BLOCK_ROW = 4;
	Block block;
public:
	BlockManager();
	~BlockManager();
	void Initialize(int a);
	void Draw(int a);
	void Update(Player& player);
	void CheckCollision(Player& player);
	void DeleteBlocks();
	//Block blocks[BLOCK_ROW];
	std::vector<Block> blocks;
};

