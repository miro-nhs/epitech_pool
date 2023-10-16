/*
** EPITECH PROJECT, 2023
** Day12
** File description:
** Picture
*/

#include "Picture.hpp"

bool Picture::getPictureFromFile(const std::string &filename)
{
    std::ifstream stream(filename.c_str());
    std::string intermediate;
    if (stream)
    {
        this->data = "";
        while (getline(stream, intermediate, '\0'))
            this->data += intermediate;
        stream.close();
    }
    else
        return false;
    return true;
}

Picture::Picture(const std::string &filename)
{
    std::ifstream stream(filename.c_str());
    std::string intermediate;
    if (stream && stream.is_open())
    {
        this->data = "";
        while (getline(stream, intermediate, '\0'))
            this->data += intermediate;
        stream.close();
    }
    else
        this->data = "ERROR";
}
