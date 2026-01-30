#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat &copy);
		Cat& operator=(const Cat &copy);
		void makeSound() const;
		void setCatIdea(int i, const std::string &idea);
		void getCatIdea(int i) const;
	private:
		Brain *brain;
};

#endif