
#include "WrongCat.hpp"
WrongCat() : Animal()
{
    type = "WrongCat";
    std::cout << type << " Default constructor called" << std::endl;
}

~WrongCat()
{
    std::cout << type << " Destructor called" << std::endl;
}

WrongCat(const WrongCat &copy) : Animal(copy)
{
    std::cout << "Copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
        type = copy.type;
    return *this;
}

const void Animal::makeSound()
{
    std::cout << "Meow?" << std::endl;
}
