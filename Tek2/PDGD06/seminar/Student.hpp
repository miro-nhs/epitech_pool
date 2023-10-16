/*
** EPITECH PROJECT, 2023
** Day06
** File description:
** Student
*/

#ifndef STUDENT_HPP_
#define STUDENT_HPP_
#include <string>

class Student {
    public:
        std::string getName();
        bool learn(std::string);
        Student(std::string);
        ~Student();
        void drink(std::string str);
    private:
        std::string name;
        int energy;
};

#endif /* !STUDENT_HPP_ */
