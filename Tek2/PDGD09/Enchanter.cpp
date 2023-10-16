/*
** EPITECH PROJECT, 2023
** Day09
** File description:
** Enchanter
*/

#include "Enchanter.hpp"

Enchanter::Enchanter(const std::string &name, int power): Peasant(name, power)
{
    Health = 100;
    std::cout << Name << " learns magic from his spellbook." << std::endl;
}

int Enchanter::attack()
{
    if (Health <= 0) {
        std::cout << Name << " is out of combat." << std::endl;
        return 0;
    }
    Power -= 0;
    std::cout << Name << " doesn't know how to fight." << std::endl;
    return 0;
}

int Enchanter::special()
{
    if (Health <= 0) {
        std::cout << Name << " is out of combat." << std::endl;
        return 0;
    }
    if (Power < 50) {
        std::cout << Name << " is out of power" << std::endl;
        return (0);
    }
    Power -= 50;
    std::cout << Name << " casts a fireball." << std::endl;
    return 99;
}

void Enchanter::rest()
{
    if (Health <= 0) {
        std::cout << Name << " is out of combat." << std::endl;
        return;
    }
    Power += 100;
    if (Power > 100)
        Power = 100;
    std::cout << Name << " meditates" << std::endl;
}

Enchanter::~Enchanter()
{
    std::cout << Name << " closes his spellbook." <<std::endl;
}
