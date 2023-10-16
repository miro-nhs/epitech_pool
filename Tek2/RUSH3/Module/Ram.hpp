/*
** EPITECH PROJECT, 2023
** B-PDG-300-STG-3-1-PDGRUSH3-thomas.parenteau
** File description:
** Ram
*/

#ifndef RAM_HPP_
#define RAM_HPP_

#include "../IMonitorModule.hpp"

class Ram : virtual public IMonitorModule {
    public:
        Ram();
        ~Ram();

        // Getter
            std::string getRamMemory() const;
            std::string getRamMemoryGigabyte() const;
            float getMemoryInfos();
        // Setter
            void setRamMemory();
    protected:
        std::string _ramMemory;
        std::string _ramMemoryGigabyte;
};

#endif /* !RAM_HPP_ */
