#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "Animal";
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	this->_type = other._type;
	std::cout << "Animal Copy Constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	std::cout << "Animal Assignment Operator called" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "animal soundss" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}