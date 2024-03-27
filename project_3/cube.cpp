#include "cube.h"
#include <iostream>

using namespace std;

namespace uiuc
{
    Cube::Cube()
    {
        cout << "Cube::Cube() called" << endl;
        length_ = 1;
    }

    Cube::Cube(double value)
    {
        cout << "Cube::Cube(" << value << ") called" << endl;
        length_ = value;
    }

    Cube::Cube(const Cube & obj)
    {
        cout << "Copy constructor called" << endl;
        length_ = obj.length_;
    }

    Cube & Cube::operator=(const Cube & obj)
    {
        cout << "Assignment called" << endl;
        length_ = obj.length_;
        return *this;
    }

    Cube::~Cube()
    {
        cout << "Destructor called" << endl;
    }

    double Cube::getVolume()
    {
        return length_ * length_ * length_;
    }

    double Cube::getSurfaceArea()
    {
        return 6 * length_ * length_;
    }

    void Cube::setLength(double value)
    {
        length_ = value;
    }
}