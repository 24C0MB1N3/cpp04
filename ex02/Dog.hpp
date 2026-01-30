#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &copy);
		Dog& operator=(const Dog &copy);
		virtual void makeSound() const;
		void setDogIdea(int i, const std::string &idea);
		void getDogIdea(int i) const;
	private:
		Brain *brain;
};

#endif