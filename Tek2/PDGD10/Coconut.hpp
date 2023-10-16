/*
** EPITECH PROJECT, 2023
** Day10
** File description:
** Coconut
*/

#ifndef COCONUT_HPP_
#define COCONUT_HPP_
#include "ANut.hpp"

class Coconut : public ANut {
    public:
        Coconut(){Name = "coconut";};
        ~Coconut();
        unsigned int getVitamins() const { if (peeled == false) return 0; else return 4; }
        std::string getName() const { return Name; }

    protected:
    private:
};

#endif /* !COCONUT_HPP_ */
