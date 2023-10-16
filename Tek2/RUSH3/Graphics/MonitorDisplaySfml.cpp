/*
** EPITECH PROJECT, 2023
** B-PDG-300-STG-3-1-PDGRUSH3-thomas.parenteau
** File description:
** MonitorDisplaySfml
*/

#include "MonitorDisplaySfml.hpp"

MonitorDisplaySfml::MonitorDisplaySfml()
{
}

void MonitorDisplaySfml::drawText()
{
    _window.draw(_timeDate);
    _window.draw(_hostname);
    _window.draw(_username);
    _window.draw(_system);
    _window.draw(_release);
    _window.draw(_CPU);
    _window.draw(_ramMemory);
    _window.draw(_usageCPU);
    _window.draw(_usageMemory);
}

void MonitorDisplaySfml::loopSfml()
{
    sf::Event event;

    _myFont.loadFromFile("Asset/Lato-Black.ttf");
    _window.create(sf::VideoMode(1920, 1080), "MyGKrellm");
    while (_window.isOpen()) {
        setText();
        handleEvent();
        _window.clear();
        drawText();
        _window.display();
        setAllModules();
    }
}

bool MonitorDisplaySfml::getEvent(sf::Event &evt, sf::RenderWindow window)
{
    return (window.pollEvent(evt));
}

void MonitorDisplaySfml::handleEvent()
{
    sf::Event event;
    while (_window.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            _window.close();
    }
}

void MonitorDisplaySfml::setText()
{
    std::string temp;

    temp = "Datetime: " + _time.getDateTime();
    _timeDate.setString(temp);
    _timeDate.setFillColor(sf::Color::Red);
    _timeDate.setCharacterSize(24);
    _timeDate.setFont(_myFont);
    _timeDate.setStyle(sf::Text::Bold);
    _timeDate.setPosition(sf::Vector2f(0, 0));
    temp = "Hostname: " + _user.getHostname();
    _hostname.setString(temp);
    _hostname.setCharacterSize(24);
    _hostname.setFillColor(sf::Color::White);
    _hostname.setFont(_myFont);
    _hostname.setStyle(sf::Text::Bold);
    _hostname.setPosition(sf::Vector2f(0, 100));
    temp = "Username: " + _user.getUsername();
    _username.setString(temp);
    _username.setCharacterSize(24);
    _username.setFillColor(sf::Color::White);
    _username.setFont(_myFont);
    _username.setStyle(sf::Text::Bold);
    _username.setPosition(sf::Vector2f(0, 200));
    temp = "OS: " + _os.getOs();
    _system.setString(temp);
    _system.setCharacterSize(24);
    _system.setFillColor(sf::Color::White);
    _system.setFont(_myFont);
    _system.setStyle(sf::Text::Bold);
    _system.setPosition(sf::Vector2f(0, 300));
    temp = "OS vers.: " + _os.getKernel();
    _release.setString(temp);
    _release.setCharacterSize(24);
    _release.setFillColor(sf::Color::White);
    _release.setFont(_myFont);
    _release.setStyle(sf::Text::Bold);
    _release.setPosition(sf::Vector2f(0, 400));
    temp = "CPU: " + _cpu.getModel();
    _CPU.setString(temp);
    _CPU.setCharacterSize(24);
    _CPU.setFillColor(sf::Color::White);
    _CPU.setFont(_myFont);
    _CPU.setStyle(sf::Text::Bold);
    _CPU.setPosition(sf::Vector2f(0, 500));
    temp = "Ram: " + _memory.getRamMemoryGigabyte() + "GB";
    _ramMemory.setString(temp);
    _ramMemory.setCharacterSize(24);
    _ramMemory.setFillColor(sf::Color::White);
    _ramMemory.setFont(_myFont);
    _ramMemory.setStyle(sf::Text::Bold);
    _ramMemory.setPosition(sf::Vector2f(0, 600));
    temp = "Usage CPU: " + std::to_string(_cpu.percentageActualUsageCPU()) + "%";
    _usageCPU.setString(temp);
    _usageCPU.setCharacterSize(24);
    _usageCPU.setFillColor(sf::Color::White);
    _usageCPU.setFont(_myFont);
    _usageCPU.setStyle(sf::Text::Bold);
    _usageCPU.setPosition(sf::Vector2f(0, 700));
    temp = "Usage Ram: " + std::to_string(_memory.getMemoryInfos()) + "%";
    _usageMemory.setString(temp);
    _usageMemory.setCharacterSize(24);
    _usageMemory.setFillColor(sf::Color::White);
    _usageMemory.setFont(_myFont);
    _usageMemory.setStyle(sf::Text::Bold);
    _usageMemory.setPosition(sf::Vector2f(0, 800));
}
