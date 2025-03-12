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
    AlienManager spawner;
    Projectile laser(5,5,5.0f,false,GREEN);
    Projectile beam(5, 5, 5.0f, true, RED);
    BlockManager row();

    //spawner.Initialize(alien, ALIEN_ROW, ALIEN_COL);

    while (WindowShouldClose()==false)
    {
        //Update
        player.Update(beam);
        spawner.Update(beam, ALIEN_ROW, ALIEN_COL);


        BeginDrawing();
        ClearBackground(BLACK);

        //Draw
        player.Draw();
        
        EndDrawing();
    }

    CloseWindow();
}