/*
** EPITECH PROJECT, 2023
** Day10
** File description:
** Lemon
*/


#ifndef LEMON_HPP_
#define LEMON_HPP_

#include "ACitrus.hpp"

class Lemon : virtual public ACitrus {
public:
    Lemon(){Name = "lemon";}
    unsigned int getVitamins() const { if (peeled == false) return 0; else return 4;}
    std::string getName() const { return Name; }
};

#endif /* !LEMON_HPP_ */
