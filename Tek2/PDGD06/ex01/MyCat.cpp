/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** main
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
#include <string>

static int check_files(int ac)
{
    if (ac >= 2)
        return(1);
    return(0);
}


static int my_cat(int ac, char **av)
{
    int i;
    char cursor;
    std::string usage = "MyCat: ";
    std::string no_files = ": No such file or directory";
    int error = 0;

    for (i = 1; i < ac; i++) {
        std::ifstream file(av[i]);
        if (!file.is_open()) {
            std::cerr << usage << av[i] << no_files << std::endl;
            error = 84;
        } else {
            cursor = file.get();
            while (file.good()) {
                std::cout << cursor;
                cursor = file.get();
            }
        }
        file.close();
    }
    return error;
}


int main(int ac, char **av)
{
    int error = 0;
    std::string str;

    if (check_files(ac) == 1)
        error = my_cat(ac, av);
    else {
        while(std::getline(std::cin, str))
            std::cout << str << std::endl;
    }
    return(error);
}
