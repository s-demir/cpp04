#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat Default Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	this->_type = other._type;
	std::cout << "WrongCat Copy Constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		WrongAnimal::operator=(other);
	}
	std::cout << "WrongCat Assignment Operator called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
		std::cout << "WrongCat Destructor called" << std::endl;
}

void    WrongCat::makeSound() const
{
	std::cout << "meoww" << std::endl;
}