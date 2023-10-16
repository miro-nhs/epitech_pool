/*
** EPITECH PROJECT, 2023
** B-PDG-300-STG-3-1-PDGRUSH3-thomas.parenteau
** File description:
** Os
*/

#ifndef OS_HPP_
#define OS_HPP_

#include "../IMonitorModule.hpp"

class Os : virtual public IMonitorModule {
    public:
        Os();
        ~Os();

        // Getter
            std::string getOs() const;
            std::string getKernel() const;
        // Setter
            void setOs();

    protected:
        std::string _os;
        std::string _kernel;
};

#endif /* !OS_HPP_ */
