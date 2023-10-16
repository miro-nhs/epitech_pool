/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** Borg
*/

#include "Borg.hpp"
#include "WarpSystem.hpp"
#include "Federation.hpp"
#include <iostream>

void Borg::Ship::setupCore(WarpSystem::Core *core)
{
    _core = core;
}

void Borg::Ship::checkCore() const
{
    std::cout << (_core->_coreReactor->isStable() ? "Everything is in order." : "Critical failure imminent.") << std::endl;
}

Borg::Ship::Ship(int frequency, short repair)
{
    std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally." << std::endl
              << "Your biological characteristics and technologies will be assimilated." << std::endl
              << "Resistance is futile." << std::endl;
}

bool Borg::Ship::move(int warp, Destination d)
{
    if (warp <= _maxWarp || d != _location || _core->_coreReactor->isStable()) {
        _location = d;
        return true;
    }
    return false;
}

bool Borg::Ship::move(int warp)
{
    if (warp <= _maxWarp || _core->_coreReactor->isStable()) {
        _location = _home;
        return true;
    }
    return false;
}

bool Borg::Ship::move(Destination d)
{
    if (d != _location || _core->_coreReactor->isStable()) {
        _location = d;
        return true;
    }
    return false;
}

bool Borg::Ship::move()
{
    if (_core->_coreReactor->isStable()) {
        _location = _home;
        return true;
    }
    return false;
}

int Borg::Ship::getShield()
{
    return _shield;
}

void Borg::Ship::setShield(int shield)
{
    _shield = shield;
}

int Borg::Ship::getWeaponFrequency()
{
    return _weaponFrequency;
}

void Borg::Ship::setWeaponFrequency(int frequency)
{
    _weaponFrequency = frequency;
}

short Borg::Ship::getRepair()
{
    return _repair;
}

void Borg::Ship::setRepair(short repair)
{
    _repair = repair;
}

void Borg::Ship::fire(Federation::Starfleet::Ship *target)
{
    target->setShield(target->getShield() - _weaponFrequency);
    std::cout << "Firing  on  target  with " << _weaponFrequency << " GW  frequency." << std::endl;
}

void Borg::Ship::fire(Federation::Ship *target)
{
    target->getCore()->_coreReactor->setStability(false);
    std::cout << "Firing  on  target  with " << _weaponFrequency << " GW  frequency." << std::endl;
}

void Borg::Ship::repair()
{
    if (_repair > 0) {
        --_repair;
        _shield = 100;
        std::cout << "Begin shield re-initialisation... Done. Awaiting further instructions." << std::endl;
    } else {
        std::cout << "Energy cells depleted, shield weakening." << std::endl;
    }
}