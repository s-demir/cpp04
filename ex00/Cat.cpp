#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->_type = "Cat";
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    this->_type = other._type;
	std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        Animal::operator=(other);
    }
    std::cout << "Cat Assignment Operator called" << std::endl;
    return (*this);
}

Cat::~Cat()
{
    	std::cout << "Cat Destructor called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "meoww" << std::endl;
}