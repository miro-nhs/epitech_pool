/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** Skat
*/

#ifndef SKAT_HPP_
    #define SKAT_HPP_
    #include <string>
    #include <iostream>

class Skat {
    public:
        Skat(std::string const&, int);
        Skat(std::string const&);
        Skat(int);
        Skat();
        ~Skat();
        int &stimPaks();
        const std::string &name() const;
        void shareStimPaks(int, int&);
        void addStimPaks(unsigned int);
        void useStimPaks();
        void status() const;

    private:
        std::string _name;
        int _stimPaks;
};

#endif /* !SKAT_HPP_ */
