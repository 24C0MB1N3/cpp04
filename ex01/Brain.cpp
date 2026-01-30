#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = copy.ideas[i];
}

Brain& Brain::operator=(const Brain &copy)
{
	std::cout << "Brain Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = copy.ideas[i];
	}
	return *this;
}

void Brain::setIdea(int i, const std::string& idea)
{
	if (i < 0 || i >= 100)
	{
		std::cout << "Please select a number from 0 to 99" << std::endl;
		return ;
	}
	ideas[i] = idea;
}

std::string Brain::getIdea(int i) const
{
	if (i < 0 || i >= 100)
	{
		std::cout << "Please select a number from 0 to 99" << std::endl;
		return "";
	}
	return ideas[i];
}