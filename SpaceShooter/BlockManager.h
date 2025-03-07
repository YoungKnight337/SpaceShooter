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
	void Initialize();
	void Draw();
	void Update(Projectile& laser);
	void CheckCollision(Projectile& laser);
	void AddBlock(Vector2 position, int width, int height, Color color);
};

