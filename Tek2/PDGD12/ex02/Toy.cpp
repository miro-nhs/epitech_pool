/*
** EPITECH PROJECT, 2023
** Day12
** File description:
** Toy
*/

#include "Toy.hpp"

Toy &Toy::operator=(Toy const &toy)
{
    picture_ = toy.getPicture();
    name_ = toy.getName();
    type_ = toy.getType();
    return *this;
}
