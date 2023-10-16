/*
** EPITECH PROJECT, 2023
** Day06
** File description:
** Assistant
*/

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
#include "Assistant.hpp"
#include "Student.hpp"

Assistant::Assistant(int id)
{
    this->id = id;
    std::cout << "Assistant [" << this->getInt() << "]: morning everyone *sip coffee*" << std::endl;
}

Assistant::~Assistant()
{
    std::cout << "Assistant [" << this->getInt() << "]: see you tomorrow at 9.00 *sip coffee*" << std::endl;
}

void Assistant::giveDrink(Student *std, std::string str)
{
    std::cout << "Assistant [" << this->getInt() << "]: drink this ,"<< std->getName() <<"* sip coffee *" << std::endl;
    std->drink(str);
}

int Assistant::getInt()
{
    return(this->id);
}

void Assistant::helpStudent(Student *std)
{
    this->readDrink(std->getName() + ".report");
    std::string drink[2] = {"Monster", "Red Bull"};

    int drink_case = (int)(random() % 2);
    std::cout << "Assistant [" << this->getInt() << "]: "<< std->getName() <<"* sip coffee *" << std::endl;
    std->drink(drink[drink_case]);
}

void Assistant::timeCheck()
{
    this->work = !this->work;
    if (this->work)
        std::cout << "Assistant [" << this->getInt() << "]: Time to teach some serious business * sip coffee *" << std::endl;
    else
        std::cout << "Assistant [" << this->getInt() << " ]: Enough teaching for today * sip coffee *" << std::endl;
}

std::string Assistant::readDrink(std::string str)
{
    std::ifstream file(str);
    std::string drink;

    if (file.is_open()) {
        std::string student(str.substr(0, str.find_last_of('.')));
        if (str.find_last_of(".drink")) {
            std::getline(file, drink);
            std::cout << "Assistant [" << this->id << "] :" << student <<
            "needs a " << drink << '!' << std::endl;
            return drink;
        }
    }
    return std::string("");
}