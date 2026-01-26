#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"
# include <iostream>

    class WrongCat : public WrongAnimal{
        public:
            WrongCat();
            ~WrongCat();
            WrongCat(std::string Type);
            WrongCat(const WrongCat &copy);
            WrongCat& operator=(const WrongCat &copy);
            void makeSound();
    };
#endif