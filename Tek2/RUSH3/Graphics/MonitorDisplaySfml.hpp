/*
** EPITECH PROJECT, 2023
** B-PDG-300-STG-3-1-PDGRUSH3-thomas.parenteau
** File description:
** MonitorDisplaySfml
*/

#ifndef MONITORDISPLAYSFML_HPP_
#define MONITORDISPLAYSFML_HPP_

#include "MonitorDisplay.hpp"

class MonitorDisplaySfml : virtual public MonitorDisplay {
    public:
        MonitorDisplaySfml();
        ~MonitorDisplaySfml() {};

        // Getter
            bool getEvent(sf::Event &evt, sf::RenderWindow window);

        void loopSfml();
        void handleEvent();
        void setText();
        void drawText();

    protected:
        sf::RenderWindow _window;
        sf::Sprite _back;
        sf::Texture _backTexture;
        sf::Text _timeDate;
        sf::Text _username;
        sf::Text _hostname;
        sf::Text _coreNb;
        sf::Text _ramMemory;
        sf::Text _usageCPU;
        sf::Text _usageMemory;
        sf::Text _totalVirtual;
        sf::Text _usedVirtual;
        sf::Text _frequency;
        sf::Text _CPU;
        sf::Text _system;
        sf::Text _hard;
        sf::Text _release;
        sf::Text _version;
        sf::Font _myFont;

};

#endif /* !MONITORDISPLAYSFML_HPP_ */
