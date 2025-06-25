#include "raylib.h"

int main()   
{
    int screenWidth = 800;
    int screenHeight = 450;

    int gameState=0;

    InitWindow(screenWidth, screenHeight, "Growing Up Asian");
    Image playerImage = LoadImage("images/image.png");
    Image dadImage = LoadImage("images/image (4).png");
    ImageResize(&playerImage, 175, 150);
    ImageResize(&dadImage, 400, 275);
    Texture2D bgImage = LoadTexture("images/homework-1.jpg");
    Texture2D playerSprite = LoadTextureFromImage(playerImage);
    Texture2D dadSprite = LoadTextureFromImage(dadImage);


    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
         BeginDrawing();
        //background
        DrawTexture(bgImage, 16.5, -175, WHITE);
        DrawTexture(playerSprite, 100, 200, WHITE);
        DrawTexture(dadSprite, 400, 150, WHITE);

        //DrawRectangle(220, 350, 400 , 100, BLACK);
        const char *dialogue;
        float dialogueLength, textBoxWidth, textBoxHeight, textBoxX, textBoxY;
        int lines;
        int textSize;
        float padding;
        
        
        if(gameState==0){
            dialogue = "You just came home from school.\nYour dad tells you that you gotta study harder to get straight A's and get into Harvard.\nInput 'Y' if you agree but 'N' if you dare.";
            lines = 3;
            textSize = 15;
            padding = 10;
            dialogueLength = MeasureText(dialogue, textSize);
            textBoxWidth = dialogueLength + (padding * 2);
            textBoxX = 60;
            textBoxHeight = (textSize + padding) * lines;
            textBoxY = 450 - textBoxHeight - padding;   
            DrawRectangle(textBoxX, textBoxY, textBoxWidth, textBoxHeight, BLUE);
            DrawText(dialogue, textBoxX + padding, textBoxY + padding, textSize, WHITE);
            if(IsKeyPressed(KEY_Y)){
                gameState=-1;
            }
            if(IsKeyPressed(KEY_N)){
             gameState=1;
            }
        } 
        if (gameState==1)
            {
                dialogue = "DID YOU JUST TALK BACK TO ME?! \nYou don't know that no means failure. \nI'M GONNA WHIP YOU SO HARD YOU WILL BECOME A DOCTOR. \n(Press C to continue)";
                lines = 3;
                textSize = 15;
                padding = 10;
                dialogueLength = MeasureText(dialogue, textSize);
                textBoxWidth = dialogueLength + (padding * 2);
                textBoxX = 200;
                textBoxHeight = (textSize + padding) * lines;
                textBoxY = 450 - textBoxHeight - padding;
                DrawRectangle(textBoxX, textBoxY, textBoxWidth, textBoxHeight, BLUE);
                DrawText(dialogue, textBoxX + padding, textBoxY + padding, textSize, WHITE);
                
            }
        if (gameState==-1){
            dialogue = "Good. You better become da doctor lah.";
            lines = 1;
            textSize = 15;
            padding = 10;
            dialogueLength = MeasureText(dialogue, textSize);
            textBoxWidth = dialogueLength + (padding * 2);
            textBoxY = 100;
            textBoxHeight = (textSize + padding) * lines;
            textBoxY = 450 - textBoxHeight - padding;
            DrawRectangle(textBoxX, textBoxY, textBoxWidth, textBoxHeight, BLUE);
            DrawText(dialogue, textBoxX + padding, textBoxY + padding, textSize, WHITE);
        }
        EndDrawing();
    }
    CloseWindow();
}
