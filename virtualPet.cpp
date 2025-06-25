#include "raylib.h"

int main()
{
    int screenWidth = 800;
    int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Virtual Pet Project");

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(WHITE);

        DrawCircle(400, 245, 80, ORANGE); // Head
        DrawCircle(370, 220, 10, DARKBLUE); // Left Eye
        DrawCircle(430, 220, 10, DARKBLUE); // Right Eye
        DrawRectangle(350, 275, 100, 5, BLACK); // Mouth

        // Left Ear
        DrawTriangle((Vector2){ 360, 130 }, // Top
                        (Vector2){ 330, 210 }, // Left
                        (Vector2){ 390, 190 }, ORANGE); // Right

        // Right Ear
        DrawTriangle((Vector2){ 440, 130 }, // Top
                        (Vector2){ 410, 190 }, // Left
                        (Vector2){ 470, 210 }, ORANGE); // Right

        // Nose
        DrawTriangle((Vector2){ 420, 240 }, // Right
                        (Vector2){ 380, 240 }, // Left
                        (Vector2){ 400, 250 }, YELLOW); // Bottom

        EndDrawing();
    }
    CloseWindow();
}