/*
** EPITECH PROJECT, 2023
** B-PDG-300-STG-3-1-PDGRUSH3-thomas.parenteau
** File description:
** MonitorDisplayNcurses
*/

#include "MonitorDisplayNcurses.hpp"

std::string MonitorDisplayNcurses::displayBars(float usage)
{
    std::string result{""};
    int size{50};
    float bars{usage * size};

    for (int i{0}; i < size; ++i) {
    result += i <= bars ? '|' : ' ';
    }

    std::string display{std::to_string(usage * 100).substr(0, 4)};
    if (usage < 0.1 || usage == 1.0)
        display = " " + std::to_string(usage * 100).substr(0, 3);
    return result + " " + display;
}

void MonitorDisplayNcurses::displayInfos()
{
    int row{0};

    std::string temp = "Username: " + getUserObj().getUsername();
    mvwprintw(_win, ++row, 2, temp.c_str());
    temp = "Hostname: " + getUserObj().getHostname();
    mvwprintw(_win, ++row, 2, temp.c_str());
    temp = "OS: " + getOsObj().getOs();
    mvwprintw(_win, ++row, 2, temp.c_str());
    temp = "OS vers.: " + getOsObj().getKernel();
    mvwprintw(_win, ++row, 2, temp.c_str());
    temp = "Datetime: " + getOsObj().getOs();
    mvwprintw(_win, ++row, 2, temp.c_str());
    mvwprintw(_win, ++row, 2, "CPU: ");
    wattron(_win, COLOR_PAIR(1));
    mvwprintw(_win, row, 10, "");
    wprintw(_win, (displayBars(getCpuObj().percentageActualUsageCPU()) + "%%").c_str());
    wattroff(_win, COLOR_PAIR(1));
    mvwprintw(_win, ++row, 2, "Memory: ");
    wattron(_win, COLOR_PAIR(1));
    mvwprintw(_win, row, 10, "");
    wprintw(_win, (displayBars(getRamObj().getMemoryInfos()) + "%%").c_str());
    wattroff(_win, COLOR_PAIR(1));
    temp = "CPU Model/Freq/Core/: " + getCpuObj().getModel();
    mvwprintw(_win, ++row, 2, temp.c_str());
    temp = "RAM: " + getRamObj().getRamMemoryGigabyte() + "GB";
    mvwprintw(_win, ++row, 2, temp.c_str());
    wrefresh(_win);
}

void MonitorDisplayNcurses::loopNcurses()
{
    int x_max{getmaxx(stdscr)};
    initscr();
    noecho();
    cbreak();
    start_color();
    _win = newwin(11, 80, 0, 0);

    while (1) {
        init_pair(1, COLOR_BLUE, COLOR_BLACK);
        init_pair(2, COLOR_GREEN, COLOR_BLACK);
        box(_win, 0, 0);
        displayInfos();
        wrefresh(_win);
        refresh();
        sleep(1);
    }
}
