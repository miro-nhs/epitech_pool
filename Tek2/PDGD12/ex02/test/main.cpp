#include <iostream>
#include <memory>
#include "ex02/Toy.hpp"
#include "ex02/Buzz.hpp"
#include "ex02/Woody.hpp"
void printToy(Toy &toy, Toy::ToyType toyType)
{
    if (toy.getType () == toyType)
        std::cout  << toy.getName () << std::endl<< toy.getAscii () << std::endl;
    else
        std::cout << "toyTpe is false" << std::endl;
}

int main(){
    Toy toto;
    Toy ET(Toy::ALIEN , "green", "./alien.txt");
    Woody woody("woddy");
    Buzz buzz("buzz");

    Buzz buzz_(buzz);
    buzz_ = buzz;

    toto.setName("TOTO !");
    printToy(toto, Toy::BASIC_TOY);
    printToy(ET, Toy::ALIEN);
    printToy(woody, Toy::WOODY);
    printToy(buzz, Toy::BUZZ);

    std:: unique_ptr <Toy > b(new  Buzz("buzziiiii"));
    std:: unique_ptr <Toy > w(new  Woody("wood"));
    std:: unique_ptr <Toy > t(new Toy(Toy::ALIEN , "ET", "alien.txt"));

    b->speak("To the code, and beyond !!!!!!!!");
    w->speak("There's a snake in my boot.");
    t->speak("the claaaaaaw");
    return  0;
}