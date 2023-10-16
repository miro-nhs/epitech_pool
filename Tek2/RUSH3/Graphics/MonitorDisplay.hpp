/*
** EPITECH PROJECT, 2023
** B-PDG-300-STG-3-1-PDGRUSH3-thomas.parenteau
** File description:
** MonitorDisplay
*/

#ifndef MONITORDISPLAY_HPP_
#define MONITORDISPLAY_HPP_1

#include "../Module/Os.hpp"
#include "../Module/Processor.hpp"
#include "../Module/Ram.hpp"
#include "../Module/Time.hpp"
#include "../Module/User.hpp"
#include "../IMonitorDisplay.hpp"

class MonitorDisplay : virtual public IMonitorDisplay {
    public:
        virtual ~MonitorDisplay() = default;

        void setAllModules();
        Os &getOsObj();
        Processor &getCpuObj();
        Ram &getRamObj();
        Time &getTimeObj();
        User &getUserObj();

    protected:
        Os _os;
        Processor _cpu;
        Ram _memory;
        Time _time;
        User _user;
};

#endif /* !MONITORDISPLAY_HPP_ */
