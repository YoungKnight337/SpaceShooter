#pragma once
#include <vector>
#include "raylib.h"
#include "Block.h"


class BlockManager
{
private:
	Block block;
public:
	BlockManager();
	~BlockManager();
	void Initialize(int a);
	void Draw(int a);
	void Update(Player& player);
	void CheckCollision(Player& player);
	void DeleteBlocks();
	//Block blocks[4];
	std::vector<Block> blocks;
};

