
#include "Animal.hpp"
Animal()
{
    std::cout << name << " Default constructor called" << std::endl;
}

~Animal()
{
    std::cout << name << " Destructor called" << std::endl;
}

Animal(const Animal &copy) : type(copy.type)
{
    std::cout << "Copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        type = copy.type;
    }
    return *this;
}

virtual const void Animal::makeSound()
{
    std::cout << "Animal makes a sound" << std::endl;
}

std::string Animal::getType()
{
    return type;
}