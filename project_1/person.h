#pragma once
#include <iostream>
#include <cstring>

class person 
{
    public:
        person();
        person(const std::string name_val, int age_val);
        ~person();
        void set_name(const std::string name);
        void set_age(int age);
        const std::string get_name() const;
        int get_age() const;
        void print() const;

    protected:
        std::string name;
        int age;
};