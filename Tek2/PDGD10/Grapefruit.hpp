/*
** EPITECH PROJECT, 2023
** Day10
** File description:
** Grapefruit
*/

#ifndef GRAPEFRUIT_HPP_
#define GRAPEFRUIT_HPP_

#include "ACitrus.hpp"

class Grapefruit : public ACitrus {
    public:
        Grapefruit(){Name = "grapefruit";};
        ~Grapefruit();
        unsigned int getVitamins() const { if (peeled == false) return 0; else return 5; }
        std::string getName() const { return Name; }

    protected:
    private:
};

#endif /* !GRAPEFRUIT_HPP_ */
