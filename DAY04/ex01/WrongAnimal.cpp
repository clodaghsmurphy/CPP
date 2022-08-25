# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "Default WrongAnimal constructor called " << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal constructor called " << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WrongAnimal destructor called for this " << this->type
	 << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = obj;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{

	std::cout << "WrongAnimal copy assingmeent operator called" << std::endl;
	this->type = rhs.type;
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Wrong animal says ??" << std::endl;
	return ;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}