#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default WrongCat constructor called " << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat destructor called for " << this->type << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = obj;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{

	std::cout << "WrongCat copy assingmeent operator called" << std::endl;
	this->type = rhs.type;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "Meowwww" << std::endl;
}