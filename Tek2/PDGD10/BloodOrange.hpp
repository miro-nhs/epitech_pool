/*
** EPITECH PROJECT, 2023
** Day10
** File description:
** BloodOrange
*/

#ifndef BLOODORANGE_HPP_
#define BLOODORANGE_HPP_

#include "Orange.hpp"

class BloodOrange : public Orange {
    public:
        BloodOrange(){Name = "blood orange";};
        ~BloodOrange();
        unsigned int getVitamins() const {if (peeled == false) return 0; else return 6; }
        std::string getName() const { return Name; }

    protected:
    private:
};

#endif /* !BLOODORANGE_HPP_ */
