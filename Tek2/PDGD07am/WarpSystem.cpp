/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** WarpSystem
*/

#include "WarpSystem.hpp"

bool WarpSystem::QuantumReactor::isStable() const
{
    return _stabilty;
}

void WarpSystem::QuantumReactor::setStability(bool const visibility)
{
    _stabilty = visibility;
}

WarpSystem::QuantumReactor *WarpSystem::Core::checkReactor() const
{
    return _coreReactor;
}

WarpSystem::Core::Core(QuantumReactor *quantumReactor): _coreReactor{quantumReactor}
{}

