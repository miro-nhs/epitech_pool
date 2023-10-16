/*
** EPITECH PROJECT, 2023
** Day12
** File description:
** Toy
*/

#ifndef TOY_HPP_
#define TOY_HPP_
#include "Picture.hpp"

class Toy {
    public:
        std::string const &getName() const{return name_;};
        void setName(std::string const &name) {name_ = name;};
        std::string const &getAscii() const {return picture_.data;};
        bool setAscii(std::string const &filename) {return picture_.getPictureFromFile(filename);};
        enum ToyType {BASIC_TOY, ALIEN};
        ToyType getType() const {return type_;};
        Toy(ToyType type, std::string const name, std::string const filename): type_(type), name_(name), picture_(Picture(filename)) {};
        Toy() {type_ = BASIC_TOY; name_ = "toy"; picture_.data = "";};
        ~Toy() {};

    protected:
    private:
    ToyType type_;
    std::string name_;
    Picture picture_;
};

#endif /* !TOY_HPP_ */
