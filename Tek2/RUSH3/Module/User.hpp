/*
** EPITECH PROJECT, 2023
** B-PDG-300-STG-3-1-PDGRUSH3-thomas.parenteau
** File description:
** User
*/

#ifndef USER_HPP_
#define USER_HPP_

#include "../IMonitorModule.hpp"

class User : virtual public IMonitorModule {
    public:
        User();
        ~User();

    // Getter
        std::string getHostname() const;
        std::string getUsername() const;
    // Setter
        void setHostname();
        void setUsername();

    protected:
        std::string _username;
        std::string _hostname;
};

#endif /* !USER_HPP_ */
