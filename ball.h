#include "raylib.h"

/*DESIGN REQUIREMENTS-----------------------------------
All listed constructors and methods should be defined in the .cpp file that accompanies this header!!!
Constructor:
It should simply just pass in all the data into the internals
draw():
This is where you use the raylib function
You must convert the floats to ints
update():
Method to update the ball's position based on its internal speed
And the speed based on acceleration due to gravity
We will talk about how to do this math in lecture (Acceleration will be hardcoded for now)
Setters and getters:
Work as named
*/

class Ball {
private:
    float x;       // X-coordinate of the ball's center
    float y;       // Y-coordinate of the ball's center
    float radius;  // Radius of the ball
    Color color;   // Color of the ball
    float speedX;  // Horizontal speed of the ball
    float speedY;  // Vertical speed of the ball

public:
    // Constructor to initialize the ball's properties, including speed
    Ball(float startX, float startY, float r, Color c, float sX, float sY);
    // Set up the default constructor as well if you have time
    //Ball();
    // Method to draw the ball to the screen
    void draw();
    // Method to update the ball's position based on its internal speed
    // After the falling part is working, we can set up the bouncing part <---------------------------
    void update(int screenWidth, int screenHeight);
    // Getters
    float getX();
    float getY();
    float getRadius();
    float getSpeedX();
    float getSpeedY();
    // Setters
    void setCoords(int pX, int pY);
    void setSpeeds(int vX, int vY);
};