/*
** EPITECH PROJECT, 2023
** Day10
** File description:
** Strawberry
*/

#ifndef STRAWBERRY_HPP_
#define STRAWBERRY_HPP_
#include "ABerry.hpp"


class Strawberry : public ABerry {
public:
    Strawberry(){Name = "Strawberry";}
    ~Strawberry(){};
    unsigned int getVitamins() const { if (peeled == false) return 0; else return 6; }
    std::string getName() const { return "strawberry"; }
};

#endif /* !STRAWBERRY_HPP_ */
