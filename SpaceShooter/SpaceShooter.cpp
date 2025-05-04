#include "raylib.h"
#include "Player.h"
//#include "Alien.h"
//#include "AlienManager.h"
#include "Block.h"
#include "BlockManager.h"
#include "LaserManager.h"


int main()
{
    //constexpr int ALIEN_ROW = 5;
    //constexpr int ALIEN_COL = 11;

    constexpr int BLOCK_ROW = 4;

    constexpr int SCREEN_WIDTH = 750;
    constexpr int SCREEN_HEIGHT = 700;
    constexpr int FRAME_RATE = 60;

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Space Shooter");
    SetTargetFPS(FRAME_RATE);

    
    Player player;
    Block block;
    Projectile laser;
    BlockManager row;
    LaserManager laserManager;
   //Alien alien;
   //AlienManager spawner;
    

    row.Initialize(block, BLOCK_ROW);
    while (WindowShouldClose()==false)
    {
        //Update
        player.Update();
        //spawner.Update(laser,alien);
        row.Update(BLOCK_ROW);
        laserManager.Update(laser);



        BeginDrawing();
        ClearBackground(BLACK);

        //Draw
        player.Draw();
        //spawner.Draw(ALIEN_ROW,ALIEN_COL);
        row.Draw(block, BLOCK_ROW);
        laserManager.Draw(laser);
        
        EndDrawing();
    }

    CloseWindow();
}