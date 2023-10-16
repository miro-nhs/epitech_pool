/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** KoalaBot
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <random>
#include "Parts.hpp"

#ifndef KOALABOT_HPP_
#define KOALABOT_HPP_

    class KoalaBot {
        public:
            KoalaBot(std::string serial = "Bob-01");
            ~KoalaBot();

            void setParts(Arms&);
            void setParts(Legs&);
            void setParts(Head&);

            void swapParts(Arms&);
            void swapParts(Legs&);
            void swapParts(Head&);

            void informations() const;
            bool status() const;
        private:
            std::string _serial;
            Arms _arms;
            Legs _legs;
            Head _head;
    };

#endif /* !KOALABOT_HPP_ */
