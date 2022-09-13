# include "Character.hpp"

Character::Character()
{
    std::cout << "MateriaSource constructor called" << std::endl;
}

Character::~Character()
{
    std::cout << "MateriaSource destructor called" << std::endl;
}

Character::Character(const Character &obj)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = obj;
}

Character &Character::operator=(const Character &rhs)
{

	std::cout << "Character copy assingmeent operator called" << std::endl;
	this->Materia= rhs.Materia;
	return *this;
}