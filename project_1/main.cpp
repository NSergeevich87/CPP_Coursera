// create and print a person object in main.cpp
#include <iostream>
#include "person.h"

int main()
{
    person p1;
    p1.print();
    p1.set_name("John");
    p1.set_age(30);
    p1.print();

    person p2("Jane", 25);
    p2.print();

    return 0;
}