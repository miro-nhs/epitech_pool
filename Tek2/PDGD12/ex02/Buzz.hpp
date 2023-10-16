/*
** EPITECH PROJECT, 2023
** Day12
** File description:
** Buzz
*/

#ifndef BUZZ_HPP_
# define BUZZ_HPP_
#include "Toy.hpp"

class Buzz : public Toy {
    public:
        Buzz(std::string name , std::string const ascii = "buzz.txt") {name_ = name; picture_ = Picture(ascii);};
        virtual void speak(std::string const &statement) override {std::cout << "BUZZ: " << name_ << " \"" << statement << "\"" << std::endl;};
};

#endif /* !BUZZ_HPP_ */
