// include Cube.h
#include "headers/Cube.h"
using namespace cub;
// constructor
Cube::Cube() {}

// constructor with side
Cube::Cube(double value) 
{
    setSide(value);
}

// set the side of the cube
void Cube::setSide(double value) 
{
    side = value;
}

// get the side of the cube
double Cube::getSide() const 
{
    return side;
}

// get the volume of the cube
double Cube::getVolume() const 
{
    return side * side * side;
}

// get the surface area of the cube
double Cube::getSurfaceArea() const 
{
    return 6 * side * side;
}