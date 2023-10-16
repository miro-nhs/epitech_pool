/*
** EPITECH PROJECT, 2023
** B-PDG-300-STG-3-1-PDGRUSH3-thomas.parenteau
** File description:
** Ram
*/

#include "Ram.hpp"

Ram::Ram()
{
}

Ram::~Ram()
{
}

std::string Ram::getRamMemory() const
{
    return (_ramMemory);
}

std::string Ram::getRamMemoryGigabyte() const
{
    return (_ramMemoryGigabyte);
}

void Ram::setRamMemory()
{
    struct sysinfo info;
    sysinfo(&info);
    _ramMemory = std::to_string(info.totalram);
    double gigabytes = info.totalram / (1024.0 * 1024.0 * 1024.0);
    _ramMemoryGigabyte = std::to_string(gigabytes);
}

float Ram::getMemoryInfos()
{
    std::string tmp, skip, info;
    float mem = 0.0;
    std::deque<std::string> memory;
    std::ifstream stream("/proc/meminfo");
    if (stream.is_open()) {
        for (int i = 0; i < 2; ++i) {
            std::getline(stream, info);
            std::istringstream linest(info);
            linest >> skip >> tmp >> skip;
            memory.push_back(tmp);
        }
    }
    float mem_total = std::stof(memory[0]);
    float mem_free = std::stof(memory[1]);
    mem = (mem_total - mem_free) / mem_total;
    return mem;
}
