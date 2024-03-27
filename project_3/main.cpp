#include <iostream>
#include "cube.h"

using namespace std;

int main()
{
    cout << "Welcome to Project 3!" << endl;

    uiuc::Cube c;
    uiuc::Cube myCube(10);
    c = myCube;

    return 0;
}