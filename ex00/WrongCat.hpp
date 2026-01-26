#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "Animal.hpp"
# include <iostream>

    class WrongCat : public Animal{
        public:
            WrongCat();
            ~WrongCat();
            WrongCat(std::string Type);
            WrongCat(const WrongCat &copy);
            WrongCat& operator=(const WrongCat &copy);
            const void makeSound();
    };
#endif