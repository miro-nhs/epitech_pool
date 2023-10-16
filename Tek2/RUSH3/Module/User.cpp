/*
** EPITECH PROJECT, 2023
** B-PDG-300-STG-3-1-PDGRUSH3-thomas.parenteau
** File description:
** User
*/

#include "User.hpp"

User::User()
{
}

User::~User()
{
}

void User::setUsername()
{
    char *temp = getenv("USER");
    _username = temp;
}

std::string User::getUsername() const
{
    return (_username);
}

void User::setHostname()
{
    char temp[HOST_NAME_MAX];
    gethostname(temp, HOST_NAME_MAX);
    _hostname = temp;
}

std::string User::getHostname() const
{
    return (_hostname);
}
