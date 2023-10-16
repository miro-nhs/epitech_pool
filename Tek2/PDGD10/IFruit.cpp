/*
** EPITECH PROJECT, 2023
** Day10
** File description:
** IFruit
*/

#include <ostream>
#include "IFruit.hpp"

std::ostream& operator<<(std::ostream& os, const IFruit& fruit) {
    os << "[name: " << fruit.getName() << ", vitamins: " << fruit.getVitamins() << ", peeled: " << std::boolalpha << fruit.isPeeled();
    return os;
}