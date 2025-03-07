#pragma once
#include <vector>
#include "raylib.h"
#include "Block.h"
class BlockManager
{
private:
	std::vector<Block> block;
public:
	BlockManager();
	~BlockManager();
	void Initialize(Block& block, int a, int b);
	void Draw(int a, int b);
	void Update(Projectile& laser, int a, int b);
	
};

