#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	brain = new Brain();
	std::cout << type << " Default constructor called" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << type << " Destructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	brain = new Brain(*copy.brain);
}

Cat& Cat::operator=(const Cat &copy)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		Animal::operator=(copy);
		delete brain;
		brain = new Brain(*copy.brain);
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

void Cat::setCatIdea(int i, const std::string &idea)
{
	brain->setIdea(i, idea);
}

void Cat::getCatIdea(int i) const
{
	std::cout << "Cat idea #" << i << ": " << brain->getIdea(i) << std::endl;
}
