#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Cat constructor called " << std::endl;
	this->_brain = new Brain();
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor called" << std::endl;
	delete(this->_brain);
}



Cat::Cat(const Cat &obj)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = obj;
}

Cat &Cat::operator=(const Cat &rhs)
{

	std::cout << "Cat copy assingmeent operator called" << std::endl;
	this->type = rhs.type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Meowwww" << std::endl;
}