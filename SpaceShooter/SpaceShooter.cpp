#include "raylib.h"
#include "Player.h"
#include "AlienManager.h"
#include "Projectile.h"

int main()
{

    constexpr int SCREEN_WIDTH = 750;
    constexpr int SCREEN_HEIGHT = 700;
    constexpr int FRAME_RATE = 60;

    

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Space Shooter");
    SetTargetFPS(FRAME_RATE);

    Player player(10,10,3,5.0f,WHITE);
    AlienManager spawner;

    while (!WindowShouldClose())
    {
        //Update

        BeginDrawing();
        ClearBackground(BLACK);

        //Draw
        player.Draw();
        
        EndDrawing();
    }

    CloseWindow();
}