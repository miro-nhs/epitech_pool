/*
** EPITECH PROJECT, 2023
** Day09
** File description:
** Peasent
*/

#include "Peasant.hpp"

Peasant::Peasant(const std::string &name, int power)
{
    Health = 100;
    Power = power;
    Name = name;
    std::cout << Name << " goes for an adventure." << std::endl;
}

int Peasant::getPower() const
{
    return Power;
}

int Peasant::getHp() const
{
    return Health;
}

const std::string &Peasant::getName() const
{
    return Name;
}

int Peasant::attack()
{
    if (Health <= 0) {
        std::cout << Name << " is out of combat." << std::endl;
        return 0;
    }
    if (Power < 10) {
        std::cout << Name << " is out of power." << std::endl;
        return (0);
    }
    Power -= 10;
    std::cout << Name << " tosses a stone." << std::endl;
    return 5;
}

int Peasant::special()
{
    if (Health <= 0) {
        std::cout << Name << " is out of combat." << std::endl;
        return 0;
    }
    std::cout << Name << " doesn't know any special move." << std::endl;
    return 0;
}

void Peasant::rest()
{
    if (Health <= 0) {
        std::cout << Name << " is out of combat." << std::endl;
        return;
    }
    Power += 30;
    if (Power > 100)
        Power = 100;
    std::cout << Name << " takes a nap." << std::endl;
}

void Peasant::damage(int damage)
{
    if (Health - damage < 0) {
        Health = 0;
        std::cout << Name << " is out of combat." << std::endl;
    }
    else {
        std::cout << Name << " takes " << damage << " damage." << std::endl;
        Health -= damage;
    }
}

Peasant::~Peasant()
{
    std::cout << Name << " is back to his crops." << std::endl;
}
