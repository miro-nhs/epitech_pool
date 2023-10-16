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
        enum Type {BASIC_TOY, ALIEN} ToyType;

        std::string getName() const{return name_;};
        void setName(std::string name) {name_ = name;};
        std::string getAscii(){return picture_.getData();};
        bool setAscii(std::string filename) {return picture_.getPictureFromFile(filename);};
        int getType() const {return ToyType;};

        explicit Toy() {name_ = "toy"; ToyType = BASIC_TOY; picture_= Picture();}
        explicit Toy(const Toy &toy);
        explicit Toy(Type type, std::string name, std::string filename);
        virtual ~Toy() {};

        Toy &operator=(const Toy &toy);

    protected:
    private:
    std::string name_;
    Picture picture_;
};

#endif /* !TOY_HPP_ */
