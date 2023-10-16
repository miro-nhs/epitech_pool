/*
** EPITECH PROJECT, 2023
** Day10
** File description:
** Raspberry
*/

#ifndef RASPBERRY_HPP_
#define RASPBERRY_HPP_

#include "ABerry.hpp"

class Raspberry : public ABerry {
    public:
        Raspberry(){Name = "raspberry";};
        ~Raspberry();
        unsigned int getVitamins() const { if (peeled == false) return 0; else return 5; }
        std::string getName() const { return Name; }

    protected:
    private:
};

#endif /* !RASPBERRY_HPP_ */
