#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include <iostream>

    class Cat : public Animal{
        public:
            Cat();
            ~Cat();
            Cat(std::string Type);
            Cat(const Cat &copy);
            Cat& operator=(const Cat &copy);
            void makeSound() const;
    };
#endif