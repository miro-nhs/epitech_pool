/*
** EPITECH PROJECT, 2023
** Day06
** File description:
** Student
*/

#include <iostream>
#include <sstream>
#include <algorithm>
#include "Student.hpp"

Student::Student(std::string str)
{
    this->name = str;
    this->energy = 100;
    std::cout << '[' << this->getName() << "] : I'm ready to learn C++" << std::endl;
}

Student::~Student()
{
    std::cout << '[' << this->getName() << "] : Wow, much learning today, very smart, such C++" << std::endl;
}

void Student::drink(std::string str)
{
    if (str.compare("Red BULL")) {
        if (this->energy + 32 > 100)
            this->energy = 100;
        else
            this->energy += 32;
        std::cout << '[' << this->getName() << "] : Red Bull gives you wings!" << std::endl;
    } else if (str.compare("Monster")) {
        if (this->energy + 64 > 100)
            this->energy = 100;
        else
            this->energy += 64;
        std::cout << '[' << this->getName() << "] : Unleash The Beast!" << std::endl;
    }
    else {
        if (this->energy + 1 > 100)
            this->energy = 100;
        else
            this->energy += 1;
        std::cout << '[' << this->getName() << "] : ah, yes... enslaved moisture." << std::endl;
    }
}

std::string Student::getName()
{
    return (this->name);
}

bool Student::learn(std::string string)
{
    if (this->energy < 42) {
        string = "shit";
        return false;
    }
    this->energy -= 42;
    std::cout << '[' << this->getName() << "] : " << string << std::endl;
    return true;
}