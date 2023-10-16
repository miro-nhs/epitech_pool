/*
** EPITECH PROJECT, 2023
** B-PDG-300-STG-3-1-PDGRUSH3-thomas.parenteau
** File description:
** main
*/

#include "Graphics/MonitorDisplayNcurses.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    if (strcmp(av[1], "text") == 0) {
        MonitorDisplayNcurses ncurses;
        ncurses.setAllModules();
        ncurses.loopNcurses();
    } else if (strcmp(av[1], "graphic") == 0) {
        MonitorDisplaySfml sfml;
        sfml.setAllModules();
        sfml.loopSfml();
    } else {
        std::cout << "Usage: ./MyGKrellm text or graphic" << std::endl;
    }
    return (0);
}