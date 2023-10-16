/*
** EPITECH PROJECT, 2023
** B-PDG-300-STG-3-1-PDGRUSH3-thomas.parenteau
** File description:
** Processor
*/

#ifndef PROCESSOR_HPP_
#define PROCESSOR_HPP_

#include "../IMonitorModule.hpp"

class Processor : virtual public IMonitorModule {
    public:
        Processor();
        ~Processor();

        // Getter
            std::string getModel() const;
            std::string getFrequency() const;
            std::string getCore() const;
            std::string getUsage() const;
            std::deque<std::string> getCpuInfos();
        // Setter
            void setModel();
            void setFrequency();
            void setCore();
            void setUsage();
        // Other
            long maxUsageCPU();
            float percentageActualUsageCPU();

    protected:
        std::string _model;
        std::string _frequency;
        std::string _core;
        std::string _usage;
};

#endif /* !PROCESSOR_HPP_ */
