#include "raylib.h"
#include "Player.h"

int main()
{

    constexpr int screenWidth = 800;
    constexpr int screenHeight = 600;

    

    InitWindow(screenWidth, screenHeight, "My first RAYLIB program!");
    SetTargetFPS(60);

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