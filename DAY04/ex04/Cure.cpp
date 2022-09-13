# include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "MateriaSource constructor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "MateriaSource destructor called" << std::endl;
}

Cure::Cure(const Cure &obj) : AMateria("cure")
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = obj;
}

Cure &Cure::operator=(const Cure &rhs)
{
	this->type = rhs.type;
	std::cout << "Cure copy assingmeent operator called" << std::endl;
	return *this;
}