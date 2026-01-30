#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\n=== Testing Brain Ideas - Dog ===" << std::endl;
	Dog* dog = new Dog();
	dog->setDogIdea(0, "I love bones");
	dog->setDogIdea(1, "Chase the mailman");
	dog->setDogIdea(2, "Bark at strangers");
	
	dog->getDogIdea(0);
	dog->getDogIdea(1);
	dog->getDogIdea(2);
	
	std::cout << "\n=== Testing Brain Ideas - Cat ===" << std::endl;
	Cat* cat = new Cat();
	cat->setCatIdea(0, "I love sleeping");
	cat->setCatIdea(1, "Knock things off tables");
	cat->setCatIdea(2, "Ignore everyone");
	
	cat->getCatIdea(0);
	cat->getCatIdea(1);
	cat->getCatIdea(2);
	
	delete dog;
	delete cat;
	
	return 0;
}