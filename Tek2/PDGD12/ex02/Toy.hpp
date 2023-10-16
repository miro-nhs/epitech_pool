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
        typedef enum ToyType_e {BASIC_TOY, ALIEN, BUZZ, WOODY} ToyType;
        explicit Toy(): type_{Toy::BASIC_TOY}, name_{"toy"} {};
        explicit Toy(ToyType const toyType, std::string const &name, std::string const &filePath): type_{toyType}, name_{name}, picture_{filePath} {};
        explicit Toy(Toy const &toy) : type_{toy.getType()}, name_{toy.getName()}, picture_{toy.getPicture()} {};
        virtual ~Toy() {};

        virtual void speak(std::string const &statement) {std::cout << name_ << " \"" << statement << "\"" << std::endl;};
        Toy &operator=(Toy const &toy);
        std::string const &getName() const {return name_;};
        void setName(std::string const name) {name_ = name;};
        ToyType getType() const {return type_;};
        bool setAscii(std::string const &fileName){return picture_.getPictureFromFile(fileName);};
        std::string getAscii() const {return picture_.getPicture();};
        Picture const &getPicture() const {return picture_;};

    protected:
    ToyType type_;
    std::string name_;
    Picture picture_;
};

#endif /* !TOY_HPP_ */
