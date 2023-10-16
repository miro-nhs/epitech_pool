/*
** EPITECH PROJECT, 2023
** Day09
** File description:
** Paladin
*/

#include "Paladin.hpp"

int Paladin::attack()
{
    return(Knight::attack());
}

int Paladin::special()
{
    return(Enchanter::special());
}

void Paladin::rest()
{
    return(Priest::rest());
}

Paladin::Paladin(const std::string &name, int power): Peasant(name, power),Knight(name, power), Priest(name, power)
{
    std::cout << Name << " fights for the light" << name << std::endl;
}

Paladin::~Paladin()
{
    std::cout << Name << " is blessed." << std::endl;
}
