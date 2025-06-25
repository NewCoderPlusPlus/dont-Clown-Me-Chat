#include "raylib.h"
#include "Ball.h"

int main() 
{
    // Screen dimensions
    const int screenWidth = 1600;
    const int screenHeight = 900;
    // Initialize the raylib window
    InitWindow(screenWidth, screenHeight, "Raylib Ball Example");
    // Create an instance of the Ball class
    // The Ball should have no starting speed, horizontal or vertical, and start somewhere in the top left of the screen
    // This is where you use the constructor
    //CODE HERE <------------------------------------------------------------------------------------------1/3
    // Set the target frames per second (FPS)
    SetTargetFPS(60);
    // Main game loop
    while (!WindowShouldClose()) { // Detect window close button or ESC key
        // Update:
        // Update the ball's position and handle bounces using its update method
        // This is also where we will update other game elements in the future
        // CODE HERE <------------------------------------------------------------------------------------------2/3
        // Draw:
        BeginDrawing();
            ClearBackground(RAYWHITE); // Clear the background with a color
            // Draw the ball using its draw method
            // CODE HERE <------------------------------------------------------------------------------------------3/3
            // Display FPS for debugging
            DrawFPS(10, 10);
        EndDrawing(); // End drawing operations
    }
    // Close window and unload resources
    CloseWindow();
    return 0;
}