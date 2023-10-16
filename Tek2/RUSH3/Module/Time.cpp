/*
** EPITECH PROJECT, 2023
** B-PDG-300-STG-3-1-PDGRUSH3-thomas.parenteau
** File description:
** Time
*/

#include "Time.hpp"

Time::Time()
{
}

Time::~Time()
{
}

std::string Time::getTime() const
{
    return (_time);
}

std::string Time::getDate() const
{
    return (_date);
}

void Time::setTime()
{
    time_t t ;
    struct tm *tmp ;
    char MY_TIME[50];
    time( &t );
    tmp = localtime( &t );
    strftime(MY_TIME, sizeof(MY_TIME), "%x - %I:%M%p", tmp);
    std::string tempTime = MY_TIME;
    char date[50];
    tempTime.copy(date, 8, 0);
    date[8] = '\0';
    _date = date;
    char time[50];
    tempTime.copy(time, 8, 11);
    time[7] = '\0';
    _time = time;
    _dateTime = _date + " " + _time;
}

std::string Time::getDateTime() const
{
    return (_dateTime);
}
