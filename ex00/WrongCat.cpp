
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    type = "WrongCat";
    std::cout << type << " Default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << type << " Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
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

void WrongCat::makeSound() const
{
    std::cout << "Meow?" << std::endl;
}
