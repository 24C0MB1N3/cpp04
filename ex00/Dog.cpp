
#include "Dog.hpp"
Dog() : Animal()
{
    type = "Dog";
    std::cout << type << " Default constructor called" << std::endl;
}

~Dog()
{
    std::cout << type << " Destructor called" << std::endl;
}

Dog(const Dog &copy) : type(copy.type)
{
    std::cout << "Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &copy)
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
    std::cout << "Woof!" << std::endl;
}
