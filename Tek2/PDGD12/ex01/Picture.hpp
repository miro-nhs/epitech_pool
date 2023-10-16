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
        Picture(){data_ = "";};
        ~Picture(){};
        Picture(const std::string &filename) {this->getPictureFromFile(filename);};
        Picture(const Picture &picture) {data_ = picture.data_;};

        std::string getData() const {return data_;};
        void setData(std::string data) {this->data_ = data;};
        Picture &operator=(const Picture &picture) {data_ = picture.data_; return (*this);};
        bool getPictureFromFile(const std::string &file);

    private:
        std::string data_;
};

#endif /* !PICTURE_HPP_ */
