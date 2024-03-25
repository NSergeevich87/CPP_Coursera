#include "person.h"

person::person() :
    name("NoName"),
    age(0)
{
}

person::person(const std::string name_val, int age_val) :
    name(name_val),
    age(age_val)
{
}

person::~person()
{
}

void person::set_name(const std::string name)
{
    this->name = name;
}

void person::set_age(int age)
{
    this->age = age;
}

const std::string person::get_name() const
{
    return name;
}

int person::get_age() const
{
    return age;
}

void person::print() const
{
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
}