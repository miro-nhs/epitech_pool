/*
** EPITECH PROJECT, 2023
** Day09
** File description:
** Peasant
*/

#ifndef PEASENT_HPP_
#define PEASENT_HPP_
#include <string>
#include <iostream>
#include "ICharacter.hpp"

class Peasant : public ICharacter{
    public:
        Peasant(const std::string &name, int power);
        ~Peasant();
        const std::string &getName() const;
        int attack() override;
        int special() override;
        void rest() override;
        int getPower() const;
        int getHp() const;
        void damage(int damage);

    protected:
    std::string Name;
    int Health;
    int Power;
};

#endif /* !PEASENT_HPP_ */
