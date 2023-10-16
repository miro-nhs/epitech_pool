/*
** EPITECH PROJECT, 2023
** Day10
** File description:
** FruitBox
*/

#include "FruitBox.hpp"
#include <iostream>

bool FruitBox::pushFruit(IFruit *fruit) {
    for(auto f:fruits) {
        if(f == fruit) return false;
    }
    if (nbFruits() >= maxSize) return false;
    fruits.push_back(fruit);
    return true;
}

IFruit *FruitBox::popFruit() {
    if (fruits.empty()) return nullptr;
    auto fruit = fruits.front();
    fruits.erase(fruits.begin());
    return fruit;
}

FruitBox::~FruitBox() {
    for (auto fruit : fruits) {
        delete fruit;
    }
}

std::ostream& operator<<(std::ostream& os, const FruitBox& fruitBox) {
    os << "FruitBox with max size " << fruitBox.maxSize << " and " << fruitBox.nbFruits() << " fruits: ";
    for (auto fruit : fruitBox.fruits) {
        os << *fruit << ", ";
    }
    return os;
}