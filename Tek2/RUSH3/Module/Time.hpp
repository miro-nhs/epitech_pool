/*
** EPITECH PROJECT, 2023
** B-PDG-300-STG-3-1-PDGRUSH3-thomas.parenteau
** File description:
** Time
*/

#ifndef TIME_HPP_
#define TIME_HPP_

#include "../IMonitorModule.hpp"

class Time : virtual public IMonitorModule {
    public:
        Time();
        ~Time();

        // Getter
            std::string getTime() const;
            std::string getDate() const;
            std::string getDateTime() const;
        // Setter
            void setTime();

    protected:
        std::string _date;
        std::string _time;
        std::string _dateTime;
};

#endif /* !TIME_HPP_ */
