/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** Knight
*/

#include "Knight.hpp"

int Knight::attack()
{
    if (Health <= 0) {
        std::cout << Name << " is out of combat." << std::endl;
        return 0;
    }
    if (Power < 10) {
        std::cout << Name << " out of power" << std::endl;
        return (0);
    }
    Power -= 10;
    std::cout << Name << " strikes with his sword." << std::endl;
    return 20;
}

Knight::Knight(const std::string &name, int power): Peasant(name, power)
{
    Health = 100;
    std::cout << Name << " vows to protect thr kingdom." << std::endl;

}

int Knight::special()
{
    if (Health <= 0) {
        std::cout << Name << " is out of combat." << std::endl;
        return 0;
    }
    if (Power < 30) {
        std::cout << Name << " is out of power" << std::endl;
        return (0);
    }
    Power -= 30;
    std::cout << Name << " impales his enemy." << std::endl;
    return 0;
}

void Knight::rest()
{
    if (Health <= 0) {
        std::cout << Name << " is out of combat." << std::endl;
        return;
    }
    Power += 50;
    if (Power > 100)
        Power = 100;
    std::cout << Name << " eats." << std::endl;
}

Knight::~Knight()
{
    std::cout << Name << " takes of his armor." <<std::endl;
}
