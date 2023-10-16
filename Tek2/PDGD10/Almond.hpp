/*
** EPITECH PROJECT, 2023
** Day10
** File description:
** Almond
*/

#ifndef ALMOND_HPP_
#define ALMOND_HPP_

#include "ANut.hpp"

class Almond : public ANut {
public:
    Almond(){Name = "almond";};
    ~Almond(){};
    unsigned int getVitamins() const { if (peeled == false) return 0; else return 2; };
    std::string getName() const { return "almond"; };
};

#endif /* !ALMOND_HPP_ */
