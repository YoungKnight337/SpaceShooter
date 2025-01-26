#include "raylib.h"
#include "Player.h"

int main()
{

    constexpr int SCREEN_WIDTH = 800;
    constexpr int SCREEN_HEIGHT = 600;
    static constexpr int FRAME_RATE = 60;

    

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Space Shooter");
    SetTargetFPS(FRAME_RATE);

    while (!WindowShouldClose())
    {
        //Update

        BeginDrawing();
        ClearBackground(BLACK);

        //Draw

        EndDrawing();
    }

    CloseWindow();
}