#include "raylib.h"
#include "Player.h"
#include "Alien.h"
#include "AlienManager.h"
#include "Projectile.h"
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

    Player player;
    
   //Alien alien;
   //AlienManager spawner;
    
    Projectile laser(5, 5, 5.0f, false, GREEN);
    Projectile beam(5, 5, 5.0f, true, RED);
    
    Block block;
    BlockManager row;

    while (WindowShouldClose()==false)
    {
        //Update
        player.Update(beam);
        //spawner.Update(laser,alien);
        row.Update(beam, BLOCK_ROW);


        BeginDrawing();
        ClearBackground(BLACK);

        //Draw
        player.Draw();
        //spawner.Draw(ALIEN_ROW,ALIEN_COL);
        row.Draw(block, BLOCK_ROW);
        
        EndDrawing();
    }

    CloseWindow();
}