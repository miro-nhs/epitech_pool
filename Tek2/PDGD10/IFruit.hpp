/*
** EPITECH PROJECT, 2023
** Day10
** File description:
** IFruit
*/


#ifndef IFRUIT_HPP_
#define IFRUIT_HPP_
#include <string>

class IFruit {
    public:
        virtual ~IFruit() = default;
        virtual unsigned int getVitamins() const = 0;
        virtual std::string getName() const = 0;
        virtual bool isPeeled() const = 0;
        virtual void peel() = 0;
        friend std::ostream& operator<<(std::ostream& os, const IFruit& fruit);
};

#endif