/*
** EPITECH PROJECT, 2023
** Day09
** File description:
** Enchanter
*/

#ifndef ENCHANTER_HPP_
#define ENCHANTER_HPP_
#include "Peasant.hpp"

class Enchanter : virtual public Peasant {
    public:
        Enchanter(const std::string &name, int power);
        ~Enchanter();
        virtual int attack();
        virtual int special();
        virtual void rest();

    protected:
    private:
};

#endif /* !ENCHANTER_HPP_ */
