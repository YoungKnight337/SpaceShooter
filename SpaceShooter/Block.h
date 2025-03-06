#pragma once
#include "raylib.h"
class Block
{
private:
	int width;
	int height;
	Vector2 positon;

public:
	Block();
	~Block();
	void Draw();
	void Update();
	void GetRect();
};

