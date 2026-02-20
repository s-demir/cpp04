#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	this->_brain = new Brain(*(other._brain));
	std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		delete this->_brain;
		this->_brain = new Brain(*(other._brain));
	}
	std::cout << "Cat Assignment Operator called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat Destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "meow meow" << std::endl;
}