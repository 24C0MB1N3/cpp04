#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Dog* j = new Dog();
    const Cat* i = new Cat();
    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    i->makeSound();
    j->makeSound();
    j->makeSound();
    i->makeSound();
    
    delete j;
    delete i;

    return 0;
}