#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "=== Creating Animals ===" << std::endl;
	const Animal* animals[4];
	
	animals[0] = new Dog();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Cat();
	
	std::cout << "\n=== Deleting Animals ===" << std::endl;
	for (int i = 0; i < 4; i++)
		delete animals[i];
	
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
	delete dog2;
	delete cat;
	
	return 0;
}