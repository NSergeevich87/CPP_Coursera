#include <iostream>
#include <cstring>

using namespace std;

namespace uiuc 
{
    class Cube
    {
        public:
            Cube();
            Cube(double value);
            // coupy constructor
            Cube(const Cube & obj);
            // assignment operator
            Cube & operator=(const Cube & obj);
            ~Cube();

            double getVolume();
            double getSurfaceArea();
            void setLength(double value);

        private:
            double length_; 
    };
}