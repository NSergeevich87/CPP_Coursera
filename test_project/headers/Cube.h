// this is the cube class header file
#pragma once

namespace cub
{
    class Cube
    {
    private:
        double side;

    public:
        Cube();
        Cube(double value);
        void setSide(double side);
        double getSide() const;
        double getVolume() const;
        double getSurfaceArea() const;
    };
}
