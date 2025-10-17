#pragma once
#include <vector>
#include "raylib.h"
#include "Block.h"

class Block;

class BlockManager
{
private:
	int BLOCK_ROW = 4;
	Block block;
public:
	BlockManager();
	~BlockManager();
	void Initialize(int a);
	void Draw(int a);
	void Update(Player& player);
	void CheckCollision(Player& player);
	void DeleteBlocks();
	std::vector<Block> blocks;
	//Block* blocks = new Block[BLOCK_ROW];
};

