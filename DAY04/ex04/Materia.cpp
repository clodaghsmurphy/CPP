# include "Materia.hpp"

AMateria::AMateria(const std::string &type)
{
	this->type = type;
}

AMateria::~AMateria()
{

}

AMateria::AMateria(const AMateria &obj)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = obj;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{

	std::cout << "AMateria copy assingmeent operator called" << std::endl;
	this->type = rhs.type;
	return *this;
}
