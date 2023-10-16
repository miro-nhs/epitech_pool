/*
** EPITECH PROJECT, 2023
** Day06
** File description:
** Assistant
*/

#ifndef ASSISTANT_HPP_
#define ASSISTANT_HPP_
#include <string>
#include "Student.hpp"

class Assistant {
    public:
        Assistant(int id);
        ~Assistant();
        int getInt();
        void helpStudent(Student *std);
        void giveDrink(Student *std, std::string);
        void timeCheck();
        std::string readDrink(std::string str);
    private:
        int id;
        bool work;
};

#endif /* !ASSISTANT_HPP_ */
