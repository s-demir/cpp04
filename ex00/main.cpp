#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "--- CORRECT ANIMAL TEST ---" << std::endl;
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "Animal's Type: " << dog->getType() << std::endl;
	std::cout << "Animal's Type: " << cat->getType() << std::endl;

	cat->makeSound();
	dog->makeSound();
	animal->makeSound();

	delete animal;
	delete dog;
	delete cat;

	std::cout << "--- WRONG ANIMAL TEST ---" << std::endl;
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "Wrong's Type: " << wrongCat->getType() << std::endl;

	wrongCat->makeSound();
	wrongAnimal->makeSound();

	delete wrongAnimal;
	delete wrongCat;

	return 0;
}
