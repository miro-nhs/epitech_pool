/*
** EPITECH PROJECT, 2023
** Day09
** File description:
** Knight
*/

#ifndef KNIGHT_HPP_
#define KNIGHT_HPP_
#include "Peasant.hpp"

class Knight : virtual public Peasant {
    public:
        Knight(const std::string &name, int power);
        ~Knight();
        virtual int attack();
        virtual int special();
        virtual void rest();

};

#endif /* !KNIGHT_HPP_ */
