#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog constructor called " << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Default Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &obj)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = obj;
}

Dog &Dog::operator=(const Dog &rhs)
{

	std::cout << "Dog copy assingmeent operator called" << std::endl;
	this->type = rhs.type;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}