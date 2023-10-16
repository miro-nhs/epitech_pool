/*
** EPITECH PROJECT, 2023
** B-PDG-300-STG-3-1-PDGRUSH3-thomas.parenteau
** File description:
** IMonitorModule
*/

#ifndef IMONITORMODULE_HPP_
#define IMONITORMODULE_HPP_

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

class IMonitorModule {
    public:
        virtual ~IMonitorModule() = default;

    protected:
};

#endif /* !IMONITORMODULE_HPP_ */
