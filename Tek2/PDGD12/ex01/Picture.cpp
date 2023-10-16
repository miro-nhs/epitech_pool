/*
** EPITECH PROJECT, 2023
** Day12
** File description:
** Picture
*/

#include "Picture.hpp"

bool Picture::getPictureFromFile(const std::string &filename)
{
    char c;
    std::ifstream picture;
    picture.open(filename, std::ifstream::in);
    if (!picture.is_open()) {
        this->data_ = "ERROR";
        return (false);
    } else {
        this->data_ = "";
        c = picture.get();
        while (picture.good()) {
            this->data_ += c;
            c = picture.get();
        }
        picture.close();
    }
    return (true);
}

