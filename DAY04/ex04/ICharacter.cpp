# include "ICharacter.hpp"

ICharacter::ICharacter()
{
    std::cout << "MateriaSource constructor called" << std::endl;
}

ICharacter::~ICharacter()
{
    std::cout << "MateriaSource destructor called" << std::endl;
}

ICharacter::ICharacter(const ICharacter &obj)
{
	std::cout << "ICharacter copy constructor called" << std::endl;
	*this = obj;
}

ICharacter &ICharacter::operator=(const ICharacter &rhs)
{

	std::cout << "ICharacter copy assingmeent operator called" << std::endl;
	//this->Materia= rhs.Materia;
	return *this;
}