#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	this->_brain = new Brain(*(other._brain));
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		delete this->_brain;
		this->_brain = new Brain(*(other._brain));
	}
	std::cout << "Dog Assignment Operator called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "haw haw" << std::endl;
}