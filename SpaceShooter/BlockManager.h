#pragma once
#include <vector>
#include "raylib.h"
#include "Block.h"


class BlockManager
{
private:
	std::vector<Block> blocks;
	Block block;
public:
	BlockManager();
	~BlockManager();
	void Initialize(int a);
	void Draw(int a);
	void Update(int a);
	
};

