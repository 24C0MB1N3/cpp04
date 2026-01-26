#include "WrongAnimal.hpp"

WrongAnimal()
{
    std::cout << type << " Default constructor called" << std::endl;
}

~WrongAnimal()
{
    std::cout << type << " Destructor called" << std::endl;
}

WrongAnimal(const WrongAnimal &copy) : type(copy.type)
{
    std::cout << "Copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        type = copy.type;
    }
    return *this;
}

virtual const void WrongAnimal::makeSound()
{
    std::cout << "WrongAnimal makes a sound" << std::endl;
}

std::string getType()
{
    return type;
}