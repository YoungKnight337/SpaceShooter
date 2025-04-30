#include "raylib.h"
#include "Player.h"
#include "Alien.h"
#include "AlienManager.h"
#include "Projectile.h"
#include "Block.h"
#include "BlockManager.h"

int main()
{
    constexpr int ALIEN_ROW = 5;
    constexpr int ALIEN_COL = 11;

    constexpr int BLOCK_ROW = 4;

    constexpr int SCREEN_WIDTH = 750;
    constexpr int SCREEN_HEIGHT = 700;
    constexpr int FRAME_RATE = 60;

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Space Shooter");
    SetTargetFPS(FRAME_RATE);

    

    Block block;
    Projectile laser;
    Projectile beam;
   //Alien alien;
   //AlienManager spawner;
    

    

    row.Initialize(block, BLOCK_ROW);
    while (WindowShouldClose()==false)
    {
        //Update
        Player().Update();
        //spawner.Update(laser,alien);
        BlockManager().Update(beam, BLOCK_ROW);
        laser.Update();


        BeginDrawing();
        ClearBackground(BLACK);

        //Draw
        Player().Draw();
        //spawner.Draw(ALIEN_ROW,ALIEN_COL);
        BlockManager().Draw(block, BLOCK_ROW);
        
        EndDrawing();
    }

    CloseWindow();
}