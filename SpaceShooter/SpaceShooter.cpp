#include "raylib.h"
#include "Player.h"
//#include "Alien.h"
//#include "AlienManager.h"
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
    BlockManager row;
    LaserManager laserManager;
   //Alien alien;
   //AlienManager spawner;
    
    //spawner.Initialize(alien, ALIEN_ROW, ALIEN_COL);
    row.Initialize(BLOCK_ROW);
    while (WindowShouldClose()==false)
    {
        //Update
        player.Update();
        //spawner.Update();
        row.Update(BLOCK_ROW);
        laserManager.Update();

        BeginDrawing();
        ClearBackground(BLACK);

        //Draw
        player.Draw();
        //spawner.Draw(ALIEN_ROW,ALIEN_COL);
        row.Draw(BLOCK_ROW);
        laserManager.Draw();
        
        EndDrawing();
    }

    CloseWindow();
}