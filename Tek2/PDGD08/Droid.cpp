/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** Droid
*/

#include <ostream>
#include"Droid.hpp"

Droid::Droid(std::string id) : _id(id), _energy(50), _attack(25), _toughness(15)
{
    char const *standby = "Standing by";
    char const *activated = "Activated";

    this->_status = new std::string(standby);
    this->silent(activated);
}

Droid::Droid(Droid const & copy) : _id(copy._id), _energy(copy._energy), _attack(copy._attack), _toughness(copy._toughness)
{
    char const *standby = "Standing by";
    char const  *activated = "Activated, Memory Dumped";

    if (copy._status)
        this->_status = new std::string(*(copy._status));
    else
        this->_status = new std::string(standby);
    speak(activated);
}

Droid::~Droid()
{
    char const *destroyed = "Destroyed";

    if (this->_status)
        delete this->_status;
    this->silent(destroyed);
}

void Droid::setId(std::string id)
{
    this->_id = id;
}

std::string Droid::getId() const
{
    return(this->_id);
}

void Droid::setEnergy(size_t energy)
{
    this->_energy = energy;
}

size_t Droid::getEnergy() const
{
    return(this->_energy);
}

size_t Droid::getAttack() const
{
    return(this->_attack);
}

size_t Droid::getToughness() const
{
    return(this->_toughness);
}

void Droid::setStatus(std::string *status)
{
    this->_status = status;
}

std::string *Droid::getStatus() const
{
    return(this->_status);
}

void Droid::silent(std::string message) {
    const char *droid = "Droid '";
    const char *separator = "' ";

    std::cout << droid << this->_id << separator << message << std::endl;
}

void Droid::speak(std::string message) {
    const char *droid = "Droid '";
    const char *separator = "' ";

    std::cout << droid << this->_id << separator << message << std::endl;
}

Droid& Droid::operator=(Droid const & equal)
{
    this->_id = equal._id;
    this->_energy = equal._energy;
    delete this->_status;
    this->_status = new std::string(*(equal._status));
    return(*this);
}

bool Droid::operator==(Droid const & compare) const
{
    return this->_id == compare._id &&
    this->_energy == compare._energy &&
    this->_attack == compare._attack &&
    this->_toughness == compare._toughness &&
    *this->_status == *(compare._status);
}

bool Droid::operator!=(Droid const & equaldiff) const
{
    return!(*this == equaldiff);
}

Droid& Droid::operator<<(size_t & energy)
{
    const int Max = 100;

    if (this->_energy < Max) {
        int lower = std::min(Max - this->_energy, energy);
        this->_energy += lower;
        energy -= lower;
    }
    return(*this);
}

std::ostream & operator<<(std::ostream & os, const Droid & droid) {
    const char *_droid = "Droid '";
    const char *separator = "', ";
    size_t Max = 100;

    if (droid.getEnergy() > Max)
        return(os << _droid << droid.getId() << separator << *(droid.getStatus()) << ", 100");
    else
        return(os << _droid << droid.getId() << separator << *(droid.getStatus()) << ", " << droid.getEnergy());
}