/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** Federation
*/

#ifndef FEDERATION_HPP_
#define FEDERATION_HPP_
#include "Destination.hpp"
#include "WarpSystem.hpp"
#include <string>

namespace Borg {
    class Ship;
}

namespace Federation {
    namespace Starfleet {
        class Captain {
        private:
            std::string _name;
            int _age;

        public:
            std::string getName() const;
            int getAge() const;
            void setAge(int const age);
            explicit Captain(std::string const name);

        };

        class Ship {
        protected:
            int _length;
            int _width;
            std::string _name;
            short _maxWarp;
            Captain *_captain = NULL;
            Destination _location;
            Destination _home = EARTH;
            int _shield = 100;
            int _photonTorpedo = 0;

        public:
            WarpSystem::Core *_core;
            void setupCore(WarpSystem::Core *core);
            void checkCore() const;
            void promote(Captain *captain);
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();
            int getShield();
            void setShield(int shield);
            int getTorpedo();
            void setTorpedo(int torpedo);
            void fire(Borg::Ship *target);
            void fire(int const torpedoes, Borg::Ship *target);
            explicit Ship(int const length, int const width, std::string const name, short const maxWarp, int torpedo = 0);
            explicit Ship();
        };

        class Ensign {
        private:
            std::string _name;

        public:
            Ensign(std::string const name);
        };
    }

    class Ship {
    protected:
        int _length;
        int _width;
        std::string _name;
        short _maxWarp;
        WarpSystem::Core *_core;
        Destination _location;
        Destination _home = VULCAN;

    public:
        void setupCore(WarpSystem::Core *core);
        void checkCore() const;
        WarpSystem::Core *getCore() const;
        bool move(int warp, Destination d);
        bool move(int warp);
        bool move(Destination d);
        bool move();
        explicit Ship(int const length, int const width, std::string const name);
    };
};

#endif /* !FEDERATION_HPP_ */
