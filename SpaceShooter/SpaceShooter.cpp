#include "raylib.h"
#include "Player.h"
#include "Alien.h"
#include "AlienManager.h"
#include "Projectile.h"

int main()
{
    constexpr int ALIEN_ROW = 5;
    constexpr int ALIEN_COL = 11;

    constexpr int SCREEN_WIDTH = 750;
    constexpr int SCREEN_HEIGHT = 700;
    constexpr int FRAME_RATE = 60;

    

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Space Shooter");
    SetTargetFPS(FRAME_RATE);

    Player player(10,10,3,5.0f,true,WHITE);
    Alien alien;
    AlienManager spawner;

    spawner.Initialize(alien, ALIEN_ROW, ALIEN_COL);

    while (!WindowShouldClose())
    {
        //Update
        player.Update();
        spawner.Update();


        BeginDrawing();
        ClearBackground(BLACK);

        //Draw
        player.Draw();
        
        EndDrawing();
    }

    CloseWindow();
}