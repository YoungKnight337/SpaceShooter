#pragma once
#include <vector>
#include "raylib.h"
#include "Block.h"

class Block;

class BlockManager
{
private:
	std::vector<Block> blocks;
public:
	BlockManager();
	~BlockManager();
	void Initialize(Block& block, int a);
	void Draw(int a);
	void Update(Projectile& laser, int a, int b);
	
};

