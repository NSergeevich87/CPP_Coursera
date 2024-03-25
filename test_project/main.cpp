// write simpe program to test the project
#include <iostream>
#include "headers/Cube.h"
using namespace cub;
int main()
{
    std::cout << "Hello, Cube!" << std::endl;
    
    cub::Cube cube_1 = cub::Cube(3.0);
    std::cout << "\nVolume: " << cube_1.getVolume() << std::endl;
    std::cout << "\nSurface Area: " << cube_1.getSurfaceArea() << std::endl;
    
    return 0;
}