/*
** EPITECH PROJECT, 2023
** B-PDG-300-STG-3-1-PDGRUSH3-thomas.parenteau
** File description:
** MonitorDisplayNcurses
*/

#ifndef MONITORDISPLAYNCURSES_HPP_
#define MONITORDISPLAYNCURSES_HPP_

#include "MonitorDisplaySfml.hpp"

class MonitorDisplayNcurses : virtual public MonitorDisplay {
    public:
        MonitorDisplayNcurses() {};
        ~MonitorDisplayNcurses() {};

        void loopNcurses();
        void displayInfos();
        std::string displayBars(float usage);
    protected:
    private:
        WINDOW *_win;
};

#endif /* !MONITORDISPLAYNCURSES_HPP_ */
