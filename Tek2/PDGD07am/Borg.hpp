/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** Borg
*/

#ifndef BORG_HPP_
#define BORG_HPP_

#include "Federation.hpp"
#include <string>

namespace Borg {
    class Ship {
    protected:
        int _side = 300;
        short _maxWarp = 9;
        Destination _location;
        Destination _home = UNICOMPLEX;
        int _shield = 100;
        int _weaponFrequency;
        short _repair = 3;

    public:
        WarpSystem::Core *_core;

        void setupCore(WarpSystem::Core *core);
        void checkCore() const;
        bool move(int warp, Destination d);
        bool move(int warp);
        bool move(Destination d);
        bool move();
        int getShield();
        void setShield(int shield);
        int getWeaponFrequency();
        void setWeaponFrequency(int frequency);
        short getRepair();
        void setRepair(short repair);
        void fire(Federation::Starfleet::Ship *target);
        void fire(Federation::Ship *target);
        void repair();

        explicit Ship(int frequency = 20, short repair = 3);
        explicit Ship();
    };

}

#endif /* !BORG_HPP_ */
