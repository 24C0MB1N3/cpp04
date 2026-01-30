#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	brain = new Brain();
	std::cout << type << " Default constructor called" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << type << " Destructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	brain = new Brain(*copy.brain);
}

Dog& Dog::operator=(const Dog &copy)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		Animal::operator=(copy);
		delete brain;
		brain = new Brain(*copy.brain);
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

void Dog::setDogIdea(int i, const std::string &idea)
{
	brain->setIdea(i, idea);
}

void Dog::getDogIdea(int i) const
{
	std::cout << "Dog idea #" << i << ": " << brain->getIdea(i) << std::endl;
}
