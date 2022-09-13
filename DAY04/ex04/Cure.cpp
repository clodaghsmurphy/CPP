# include "Cure.hpp"

Cure::Cure()
{
    std::cout << "MateriaSource constructor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "MateriaSource destructor called" << std::endl;
}

Cure::Cure(const Cure &obj)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = obj;
}

Cure &Cure::operator=(const Cure &rhs)
{

	std::cout << "Cure copy assingmeent operator called" << std::endl;
	this->Materia= rhs.Materia;
	return *this;
}