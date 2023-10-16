/*
** EPITECH PROJECT, 2023
** Day10
** File description:
** ABerry
*/
#ifndef ABERRY_HPP_
#define ABERRY_HPP_

#include "AFruit.hpp"

class ABerry : public AFruit {
    public:
        void peel() {} // berries are always peeled, so this method does nothing
        ~ABerry(){};
};

#endif /* !ABERRY_HPP_ */
