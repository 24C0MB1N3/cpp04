
#include "Cat.hpp"
Cat::Cat() : Animal()
{
    type = "Cat";
    std::cout << type << " Default constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << type << " Destructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
        type = copy.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}
