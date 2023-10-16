/*
** EPITECH PROJECT, 2023
** Day10
** File description:
** FruitUtils
*/

#ifndef FRUITUTILS_HPP_
#define FRUITUTILS_HPP_

#include <typeinfo>
#include "FruitBox.hpp"

class FruitUtils {
    public:
        void sort(FruitBox &unsorted, FruitBox &lemon, FruitBox &citrus, FruitBox &berry);
};

#endif /* !FRUITUTILS_HPP_ */
