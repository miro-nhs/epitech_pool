/*
** EPITECH PROJECT, 2023
** PDG
** File description:
** Parts
*/

#include "Parts.hpp"

//////////////Arms///////////////////::

Arms::Arms(std::string serial, bool functionnal)
{
    this->_serial=serial;
    this->_functionnal = functionnal;
}

bool Arms::isFunctionnal() const
{
    return(this->_functionnal);
}

std::string Arms::serial()
{
    return (this->_serial);
}

void Arms::informations() const
{
    if(this->_functionnal == true)
    std::cout <<  "\t[Parts] Arms "  << this->_serial << " status : OK" << std::endl;
    else
    std::cout <<  "\t[Parts] Arms "  << this->_serial << " status : KO" << std::endl;
}

///////////////////Legs///////////////////:::

Legs::Legs(std::string serial, bool functionnal)
{
    this->_serial=serial;
    this->_functionnal = functionnal;
}

bool Legs::isFunctionnal() const
{
    return(this->_functionnal);
}

std::string Legs::serial()
{
    return (this->_serial);
}

void Legs::informations() const
{
    if(this->_functionnal == true)
    std::cout <<  "\t[Parts] Legs "  << this->_serial << " status : OK" << std::endl;
    else
    std::cout <<  "\t[Parts] Legs "  << this->_serial << " status : KO" << std::endl;
}
/////////////Head///////

Head::Head(std::string serial, bool functionnal)
{
    this->_serial=serial;
    this->_functionnal = functionnal;
}

bool Head::isFunctionnal() const
{
    return(this->_functionnal);
}

std::string Head::serial()
{
    return (this->_serial);
}

void Head::informations() const
{
    if(this->_functionnal == true)
    std::cout <<  "\t[Parts] Head "  << this->_serial << " status : OK" << std::endl;
    else
    std::cout <<  "\t[Parts] Head "  << this->_serial << " status : KO" << std::endl;
}

