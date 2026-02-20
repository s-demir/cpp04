#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "WrongAnimal";
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	this->_type = other._type;
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}
	std::cout << "WrongAnimal Assignment Operator called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
		std::cout << "WrongAnimal Destructor called" << std::endl;
}

void    WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal soundss" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}