/*
** EPITECH PROJECT, 2023
** Day09
** File description:
** Paladin
*/

#ifndef PALADIN_HPP_
#define PALADIN_HPP_
#include "Peasant.hpp"
#include "Knight.hpp"
#include "Priest.hpp"

class Paladin : public Knight, public Priest{
    public:
        Paladin(const std::string &name, int power);
        ~Paladin();
        int attack() override;
        int special() override;
        void rest() override;

};

#endif /* !PALADIN_HPP_ */
