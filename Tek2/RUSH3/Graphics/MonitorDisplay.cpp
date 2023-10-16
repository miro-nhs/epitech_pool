/*
** EPITECH PROJECT, 2023
** B-PDG-300-STG-3-1-PDGRUSH3-thomas.parenteau
** File description:
** MonitorDisplay
*/

#include "MonitorDisplay.hpp"

void MonitorDisplay::setAllModules()
{
    _os.setOs();
    _cpu.setModel();
    _memory.setRamMemory();
    _time.setTime();
    _user.setUsername();
    _user.setHostname();
}

Os &MonitorDisplay::getOsObj()
{
    return (_os);
}

Processor &MonitorDisplay::getCpuObj()
{
    return (_cpu);
}

Ram &MonitorDisplay::getRamObj()
{
    return (_memory);
}

Time &MonitorDisplay::getTimeObj()
{
    return (_time);
}

User &MonitorDisplay::getUserObj()
{
    return (_user);
}
