#pragma once
#include <vector>
#include "raylib.h"
#include "Block.h"

class Block;

class BlockManager
{
private:
	Vector2 position;
	std::vector<Block> blocks;
public:
	BlockManager();
	~BlockManager();
	void Initialize(Block& block, int a);
	void Draw(Block& block, int a);
	void Update(Projectile& laser, int a);
	
};

