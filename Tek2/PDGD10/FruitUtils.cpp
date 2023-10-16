/*
** EPITECH PROJECT, 2023
** Day10
** File description:
** FruitUtils
*/

#include "FruitUtils.hpp"
#include "ABerry.hpp"
#include "Lemon.hpp"

void FruitUtils::sort(FruitBox &unsorted, FruitBox &lemon, FruitBox &citrus, FruitBox &berry)
{
    while (!unsorted.isEmpty()) {
            auto fruit = unsorted.popFruit();
            if (typeid(*fruit) == typeid(Lemon)) {
                if (!lemon.pushFruit(fruit)) {
                    unsorted.pushFruit(fruit);
                }
            } else if (dynamic_cast<ACitrus*>(fruit) && !dynamic_cast<Lemon*>(fruit)) {
                if (!citrus.pushFruit(fruit)) {
                    unsorted.pushFruit(fruit);
                }
            } else if (dynamic_cast<ABerry*>(fruit)) {
                if (!berry.pushFruit(fruit)) {
                    unsorted.pushFruit(fruit);
                }
            } else {
                unsorted.pushFruit(fruit);
            }
        }
}
