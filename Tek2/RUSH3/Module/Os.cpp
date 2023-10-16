/*
** EPITECH PROJECT, 2023
** B-PDG-300-STG-3-1-PDGRUSH3-thomas.parenteau
** File description:
** Os
*/

#include "Os.hpp"

Os::Os()
{
}

Os::~Os()
{
}

std::string Os::getOs() const
{
    return _os;
}

std::string Os::getKernel() const
{
    return _kernel;
}

void Os::setOs()
{
    struct utsname uts;

    if (uname(&uts) == 0) {
        std::string temp = uts.sysname;
        temp += " ";
        temp += uts.machine;
        _os = temp;
        _kernel = uts.release;
    }
}
