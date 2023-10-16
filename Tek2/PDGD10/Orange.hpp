/*
** EPITECH PROJECT, 2023
** Day10
** File description:
** Orange
*/

#ifndef ORANGE_HPP_
#define ORANGE_HPP_

#include "ACitrus.hpp"

class Orange : public ACitrus {
public:
    Orange(){ Name = "orange";};
    ~Orange(){};
    unsigned int getVitamins() const { if (peeled == false) return 0; else return 7; }
    std::string getName() const { return "orange"; }
};

#endif /* !ORANGE_HPP_ */
