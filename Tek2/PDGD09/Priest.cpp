/*
** EPITECH PROJECT, 2023
** Day09
** File description:
** Priest
*/

#include "Priest.hpp"

Priest::Priest(const std::string &name, int power): Peasant(name, power), Enchanter(name, power)
{
    Health = 100;
    std::cout << Name << " enters in the order." << std::endl;
}

int Priest::attack()
{
    if (Health <= 0) {
        std::cout << Name << " is out of combat." << std::endl;
        return 0;
    }
    Power -= 0;
    std::cout << Name << " doesn't know how to fight." << std::endl;
    return 0;
}

int Priest::special()
{
    return (Enchanter::special());
}

void Priest::rest()
{
    if (Health <= 0) {
        std::cout << Name << " is out of combat." << std::endl;
        return;
    }
    Power += 100;
    Health += 100;
    if (Power > 100)
        Power = 100;
    std::cout << Name << " prays." << std::endl;
}

Priest::~Priest()
{
    std::cout << Name << " finds peace." <<std::endl;
}
