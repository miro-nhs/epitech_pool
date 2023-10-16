/*
** EPITECH PROJECT, 2023
** Day12
** File description:
** Picture
*/

#ifndef PICTURE_HPP_
#define PICTURE_HPP_
#include <iostream>
#include <fstream>
#include <string>

class Picture {
    public:
        std::string data;
        Picture(){data = "";};
        ~Picture(){};
        Picture(const std::string &filename);
        Picture(Picture const &picture) : data(picture.data) {};
        bool getPictureFromFile(const std::string &file);

    protected:
    private:
};

#endif /* !PICTURE_HPP_ */
