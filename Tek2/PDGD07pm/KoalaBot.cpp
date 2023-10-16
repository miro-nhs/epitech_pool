/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** KoalaBot
*/

#include "KoalaBot.hpp"

KoalaBot::KoalaBot(std::string serial)
{
    this->_serial = serial;
}

KoalaBot::~KoalaBot()
{
}

void KoalaBot::informations() const
{
    std::cout << "[KoalaBot] " << this->_serial << std::endl;
    this->_arms.informations();
    this->_legs.informations();
    this->_head.informations();
}

bool KoalaBot::status() const
{
    return this->_arms.isFunctionnal()
    && this->_legs.isFunctionnal()
    && this->_head.isFunctionnal();
}

//////////////Part///////////////////:::

void KoalaBot::setParts(Arms& arms)
{
    this->_arms = arms;
}

void KoalaBot::setParts(Legs& legs)
{
    this->_legs = legs;
}

void KoalaBot::setParts(Head& head)
{
    this->_head = head;
}

void KoalaBot::swapParts(Arms& arms)
{
    this->setParts(arms);
}

void KoalaBot::swapParts(Legs& legs)
{
    this->setParts(legs);
}

void KoalaBot::swapParts(Head& head)
{
    this->setParts(head);
}