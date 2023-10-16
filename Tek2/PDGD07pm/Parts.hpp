/*
** EPITECH PROJECT, 2022
** B-PDG-300-STG-3-1-PDGD07pm-thomas.weinstein
** File description:
** Parts
*/

#ifndef PARTS_HPP_
    #define PARTS_HPP_
    #include <iostream>
    #include <fstream>
    #include <iomanip>
    #include <string>
    #include <algorithm>
    #include <random>

    class Arms {
        private:
            std::string _serial;
            bool _functionnal;
        public:
            Arms(std::string serial = "A-01", bool functionnal = true);

            bool isFunctionnal() const;
            std::string serial();
            void informations() const;
    };
    class Legs {
        private:
            std::string _serial;
            bool _functionnal;
        public:
            Legs(std::string serial = "L-01", bool functionnal = true);

            bool isFunctionnal() const;
            std::string serial();
            void informations() const;
    };
    class Head {
        private:
            std::string _serial;
            bool _functionnal;
        public:
            Head(std::string serial = "H-01", bool functionnal = true);

            bool isFunctionnal() const;
            std::string serial();
            void informations() const;
    };


#endif /* !PARTS_HPP_ */
