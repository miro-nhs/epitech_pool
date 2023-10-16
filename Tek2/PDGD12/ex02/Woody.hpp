/*
** EPITECH PROJECT, 2023
** Day12
** File description:
** Woody
*/

#include "Toy.hpp"

#ifndef WOODY_HPP_
# define WOODY_HPP_

class Woody : public Toy {
    public:
        Woody(std::string name , std::string const ascii = "woody.txt") {name_ = name; picture_ = Picture(ascii);};
        virtual void speak(std::string const &statement) noexcept {std::cout << "WOODY: " << name_ << " \"" << statement << "\"" << std::endl;};
};

#endif /* !WOODY_HPP_ */