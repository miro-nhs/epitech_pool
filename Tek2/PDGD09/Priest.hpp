/*
** EPITECH PROJECT, 2023
** Day09
** File description:
** Priest
*/

#ifndef PRIEST_HPP_
#define PRIEST_HPP_

#include "Enchanter.hpp"

class Priest : public Enchanter {
    public:
        Priest(const std::string &name, int power);
        ~Priest();
        virtual int attack();
        virtual int special();
        virtual void rest();

};

#endif /* !PRIEST_HPP_ */
