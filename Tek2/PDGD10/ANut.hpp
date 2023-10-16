/*
** EPITECH PROJECT, 2023
** Day10
** File description:
** ANut
*/
#ifndef ANUT_HPP_
#define ANUT_HPP_

#include "AFruit.hpp"

class ANut : virtual public AFruit {
    public:
        ANut(){};
        ~ANut(){}
    // Specific implementation of getVitamins and getName
};

#endif /* !ANUT_HPP_ */
