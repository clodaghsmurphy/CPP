# include "ICharacter.hpp"

ICharacter::ICharacter(std::string name)
{
    //std::cout << "ICharacter constructor called for " << this->name << std::endl;
	this->name = name;
	//this->inventory = NULL;
}

ICharacter::~ICharacter()
{
    //std::cout << "ICharcter destructor called" << std::endl;
}

ICharacter::ICharacter(const ICharacter &obj)
{
	std::cout << "ICharacter copy constructor called" << std::endl;
	*this = obj;
}

ICharacter &ICharacter::operator=(const ICharacter &rhs)
{
	std::cout << "ICharacter copy assingmeent operator called" << std::endl;
	this->name = rhs.name;
	return *this;
}