#include "raylib.h"
#include "Ball.h"
//This is where you define your methods and constructors!

Ball::Ball(float startX, float startY, float r, Color c, float sX, float sY)
{
    //Pass in the data
}
void Ball::draw()
{
    DrawCircle (getX, getY, 50, YELLOW);
}
void Ball::update(int screenWidth, int screenHeight)
{
    //Math goes here
}
float Ball::getX()
{
    //return the correct data
    return X;
}
float Ball::getY()
{
    //return the correct data
    return Y;
}
float Ball::getRadius()
{
    //return the correct data
    return Radius;
}
float Ball::getSpeedX()
{
    //return the correct data

    return SpeedX;
}
float Ball::getSpeedY()
{
    //return the correct data
    return SpeedY;
}
void Ball::setCoords(int pX, int pY)
{
    //Set the variables to what is input is
}
void Ball::setSpeeds(int vX, int vY)
{
    //Set the variables to what the input is
}