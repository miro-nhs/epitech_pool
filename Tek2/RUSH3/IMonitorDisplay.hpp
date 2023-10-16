/*
** EPITECH PROJECT, 2023
** B-PDG-300-STG-3-1-PDGRUSH3-thomas.parenteau
** File description:
** IMonitorDisplay
*/

#ifndef IMONITORDISPLAY_HPP_
#define IMONITORDISPLAY_HPP_

enum library {SFML, NCURSES, OTHER};
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctime>
#include "sys/types.h"
#include "sys/sysinfo.h"
#include <unistd.h>
#include <limits.h>
#include <netdb.h>
#include <sys/utsname.h>
#include <curses.h>
#include <thread>
#include <fstream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <deque>
#include <SFML/Graphics.hpp>

class IMonitorDisplay {
    public:
        virtual ~IMonitorDisplay() = default;

        virtual void setAllModules() = 0;
        virtual Os &getOsObj() = 0;
        virtual Processor &getCpuObj() = 0;
        virtual Ram &getRamObj() = 0;
        virtual Time &getTimeObj() = 0;
        virtual User &getUserObj() = 0;
    protected:
};

#endif /* !IMONITORDISPLAY_HPP_ */
