/*
** EPITECH PROJECT, 2023
** Day12
** File description:
** Picture
*/

#include "Picture.hpp"
#include <sstream>

bool Picture::getPictureFromFile(std::string const &fileName)
{
    if (fileName == "") {
        data_ = "";
        return true;
    }
    std::ifstream file(fileName.c_str());
    if (file || file.is_open()) {
        std::ostringstream ss;
        ss << file.rdbuf();
        data_ = ss.str();
    } else {
        data_ = "ERROR";
        return false;
    }
    file.close();
    return true;
}
