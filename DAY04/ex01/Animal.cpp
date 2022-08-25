# include "Animal.hpp"

Animal::Animal(std::string type)
{
	std::cout << "Default Animal constructor called " << std::endl;
	this->type = type;
}

Animal::Animal()
{
	std::cout << "Default Animal constructor called " << std::endl;
	this->type = "Animal";
}

Animal::~Animal()
{
	std::cout << "Default Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = obj;
}

Animal &Animal::operator=(const Animal &rhs)
{

	std::cout << "Animal copy assingmeent operator called" << std::endl;
	this->type = rhs.type;
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "Animal says ??" <<std::endl;
	return ;
}

std::string	Animal::getType() const
{
	return (this->type);
}