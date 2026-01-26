
#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    std::cout << type << " Default constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << type << " Destructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
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

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}
