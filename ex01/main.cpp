#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const int idx = 4;
	Animal* animals[idx];

	std::cout << "--- ANIMALS CONSTRUCTOR ---" << std::endl;
	for (int i = 0; i < idx / 2; i++) {
		animals[i] = new Dog( );
	}
	for (int i = idx / 2; i < idx; i++) {
		animals[i] = new Cat();
	}

	std::cout << "\n--- VOICE TEST ---" << std::endl;
	for (int i = 0; i < idx; i++) {
		animals[i]->makeSound();
	}

	std::cout << "\n--- ANIMALS DESTRUCTOR ---" << std::endl;
	for (int i = 0; i < idx; i++) {
		delete animals[i];
	}

	std::cout << "\n--- DEEP COPY TEST ---" << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}
	std::cout << "\n--- DESTRUCTOR ---" << std::endl;

	return (0);
}