/*
** EPITECH PROJECT, 2023
** Day10
** File description:
** AFruit
*/

#ifndef AFRUIT_HPP_
#define AFRUIT_HPP_

#include "IFruit.hpp"

class AFruit : public IFruit {
    public:
        AFruit(){};
        ~AFruit(){};
        virtual unsigned int getVitamins() const = 0;
        virtual std::string getName() const = 0;
        bool isPeeled() const { return peeled; }
        void peel() { peeled = true; }
    protected:
        bool peeled = false;
        std::string Name;
};

#endif
