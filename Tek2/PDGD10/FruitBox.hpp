/*
** EPITECH PROJECT, 2023
** Day10
** File description:
** FruitBox
*/

#ifndef FRUITBOX_HPP_
#define FRUITBOX_HPP_

#include "IFruit.hpp"
#include <vector>

class FruitBox {
public:
    FruitBox(unsigned int size) : maxSize(size) {}
    unsigned int getSize() const { return maxSize; }
    unsigned int nbFruits() const { return fruits.size(); }
    bool pushFruit(IFruit *fruit);
    IFruit *popFruit();
    ~FruitBox();
    bool isEmpty() const { return fruits.empty();}
    FruitBox(const FruitBox&) = delete; // disable copy constructor
    FruitBox& operator=(const FruitBox&) = delete; // disable copy assignment operator
    friend std::ostream& operator<<(std::ostream& os, const FruitBox& fruitBox);

protected:
    std::vector<IFruit*> fruits;
    unsigned int maxSize;
};
#endif /* !FRUITBOX_HPP_ */
