#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

    class Animal{
        public:
            Animal();
            ~Animal();
            Animal(std::string Type);
            Animal(const Animal &copy);
            Animal& operator=(const Animal &copy);
            virtual void makeSound() const;
            std::string getType();
        protected:
            std::string type;
    };
#endif