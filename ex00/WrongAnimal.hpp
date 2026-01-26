#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

    class WrongAnimal{
        public:
            WrongAnimal();
            ~WrongAnimal();
            WrongAnimal(const WrongAnimal &copy);
            WrongAnimal& operator=(const WrongAnimal &copy);
            const void makeSound();
            std::string getType();
        protected:
            std::string type;
    };
#endif