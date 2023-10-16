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
        explicit Picture(std::string const &fileName = "") {getPictureFromFile(fileName);};
        explicit Picture(Picture const &picture): data_{picture.getPicture()} {};
        ~Picture() {};

        Picture &operator=(Picture const &picture) {data_ = picture.getPicture(); return *this;};
        bool getPictureFromFile(std::string const &file);
        std::string getPicture() const {return data_;};

    private:
        std::string data_;
};

#endif /* !PICTURE_HPP_ */
