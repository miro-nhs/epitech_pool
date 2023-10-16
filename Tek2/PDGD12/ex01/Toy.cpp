/*
** EPITECH PROJECT, 2023
** Day12
** File description:
** Toy
*/

#include "Toy.hpp"

Toy::Toy(const Toy &toy)
{
    Picture tmp = Picture();
    tmp.setData(toy.picture_.getData());
    this->ToyType = toy.ToyType;
    this->name_ = toy.name_;
    this->picture_ = tmp;
}

Toy &Toy::operator=(const Toy &toy)
{
    Picture tmp = Picture();
    tmp.setData(toy.picture_.getData());
    this->ToyType = toy.ToyType;
    this->name_ = toy.name_;
    this->picture_ = tmp;
    return (*this);
}

Toy::Toy()
{
    this->name_ = "toy";
    this->ToyType = BASIC_TOY;
    this->picture_ = Picture();
}