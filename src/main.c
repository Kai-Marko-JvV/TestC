#include <stdio.h>
#include "raylib.h"
#include "raygui.h"

int main()// int argc, char *argv[]
{
    // printf("Hello, World!\n");

    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(400, 400, "heyy~");
    SetTargetFPS(60);

    while (!WindowShouldClose() && !IsKeyDown(KEY_ESCAPE))
    {
        BeginDrawing();
        ClearBackground(BLACK);

        DrawText("sup", 199, 199, 50, GREEN);

        EndDrawing();// get mouse position / is key pressed / draw...
    }

    CloseWindow();

    return 0;
}