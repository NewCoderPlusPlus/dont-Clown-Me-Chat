#include "raylib.h"

int main()
{
    int screenWidth = 800;
    int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Virtual Pet Project");
    int action = 0;
    const char* emotion = { "sad" };

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        if (IsKeyPressed(KEY_P))
        {
            action = 1;
        }
        if (IsKeyPressed(KEY_F))
        {
            action = 2;
        }
        if (IsKeyPressed(KEY_C))
        {
            action = 3;
        }

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

        DrawText(TextFormat("Failure is feeling %s", emotion), 150, 30, 40, VIOLET);
        DrawText("Press P, F, or C to interact!", 250, 380, 20, LIGHTGRAY);
                    
        switch (action)
        {
            case 1:
                DrawText("Studying!", 600, 160, 30, RED);
                emotion = { "happy" };
                break;
            case 2:
                DrawText("Failing!", 600, 160, 30, DARKGREEN);
                emotion = { "happy" };
                break;
            case 3:
                DrawText("Cleaning!", 600, 160, 30, BLUE);
                emotion = { "happy" };
                break;
            default:
                break;
        }

        EndDrawing();
    }
    CloseWindow();
}