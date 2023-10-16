/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** Federation
*/

#include "Federation.hpp"
#include "WarpSystem.hpp"
#include "Borg.hpp"
#include <iostream>

Federation::Starfleet::Captain::Captain(std::string const name): _name{name}
{}

std::string Federation::Starfleet::Captain::getName() const
{
    return _name;
}

int Federation::Starfleet::Captain::getAge() const
{
    return _age;
}

void Federation::Starfleet::Captain::setAge(int const age)
{
    _age = age;
}

Federation::Starfleet::Ensign::Ensign(std::string const name)
{
    std::cout << "Ensign " << name << ", awaiting orders." << std::endl;
}

Federation::Starfleet::Ship::Ship(int const length, int const width, std::string const name, short const maxWarp, int torpedo): _length{length}, _width{width}, _name{name}, _maxWarp{maxWarp}, _photonTorpedo{torpedo}
{
    _location = _home;
    std::cout << "The ship USS " << name << " has been finished." << std::endl << "It is "
              << length << " m in length and " << width << " m in width."
              << std::endl << "It can go to Warp " << maxWarp
              << "!" << std::endl;
    if (torpedo != 0)
        std::cout << "Weapons are set: " << torpedo << " torpedoes ready." << std::endl;
}

Federation::Starfleet::Ship::Ship(): _length{289}, _width{132}, _name{"Entreprise"}, _maxWarp{6}
{
    _location = _home;
    std::cout << "The ship USS " << _name << " has been finished." << std::endl << "It is "
              << _length << " m in length and " << _width << " m in width."
              << std::endl << "It can go to Warp " << _maxWarp
              << "!" << std::endl;
}

Federation::Ship::Ship(int const length, int const width, std::string const name): _length{length}, _width{width}, _name{name}, _maxWarp{1}
{
    std::cout << "The independent ship " << _name
              << " just finished its construction." << std::endl << "It is " << _length
              << " m in length and " << _width << " m in width." << std::endl;
}

void Federation::Ship::checkCore() const
{
    std::cout << _name << ": The core is "
              << (_core->_coreReactor->isStable() ? "stable" : "unstable")
              << " at the time." << std::endl;
}

void Federation::Ship::setupCore(WarpSystem::Core *core)
{
    _core = core;
    std::cout << _name << ": The core is set." << std::endl;
}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
    _core = core;
    std::cout << "USS " << _name << ": The core is set." << std::endl;
}

void Federation::Starfleet::Ship::checkCore() const
{
    std::cout << "USS " << _name << ": The core is "
              << (_core->_coreReactor->isStable() ? "stable" : "unstable")
              << " at the time." << std::endl;
}

void Federation::Starfleet::Ship::promote(Federation::Starfleet::Captain *captain)
{
    _captain = captain;
    std::cout << captain->getName() << ": I'm glad to be the captain of the USS " << _name << "." << std::endl;
}

bool Federation::Ship::move(int warp)
{
    if (warp <= _maxWarp || _core->_coreReactor->isStable()) {
        _location = _home;
        return true;
    }
    return false;
}

bool Federation::Ship::move(Destination d)
{
    if (d != _location || _core->_coreReactor->isStable()) {
        _location = d;
        return true;
    }
    return false;
}

bool Federation::Ship::move()
{
    if (_core->_coreReactor->isStable()) {
        _location = _home;
        return true;
    }
    return false;
}

bool Federation::Starfleet::Ship::move(int warp, Destination d)
{
    if (warp <= _maxWarp && d != _location && _core->_coreReactor->isStable()) {
        _location = d;
        return true;
    }
    return false;
}

bool Federation::Starfleet::Ship::move(int warp)
{
    if (warp <= _maxWarp && _core->_coreReactor->isStable()) {
        _location = _home;
        return true;
    }
    return false;
}

bool Federation::Starfleet::Ship::move(Destination d)
{
    if (d != _location && _core->_coreReactor->isStable()) {
        _location = d;
        return true;
    }
    return false;
}

bool Federation::Starfleet::Ship::move()
{
    if (_core->_coreReactor->isStable()) {
        _location = _home;
        return true;
    }
    return false;
}

int Federation::Starfleet::Ship::getShield()
{
    return _shield;
}

void Federation::Starfleet::Ship::setShield(int shield)
{
    _shield = shield;
}

int Federation::Starfleet::Ship::getTorpedo()
{
    return _photonTorpedo;
}

void Federation::Starfleet::Ship::setTorpedo(int torpedo)
{
    _photonTorpedo = torpedo;
}

void Federation::Starfleet::Ship::fire(Borg::Ship *target)
{
    fire(1, target);
}

void Federation::Starfleet::Ship::fire(int const torpedo, Borg::Ship* target) {
    if (torpedo <= _photonTorpedo) {
        target->setShield(getShield() - (50 * torpedo));
        _photonTorpedo -= torpedo;
        std::cout << _name << ": Firing on target. " << _photonTorpedo << " torpedoes remaining." << std::endl;
    } else if (_photonTorpedo) {
        std::cout << _name << ": No enough torpedoes to fire, " << (_captain ? _captain->getName() : "") << "!" << std::endl;
    } else {
        std::cout << _name << ": No more torpedo to fire, " << (_captain ? _captain->getName() : "") << "!" << std::endl;
    }
}

WarpSystem::Core *Federation::Ship::getCore() const
{
    return _core;
}
