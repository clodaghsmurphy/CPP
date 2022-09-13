# include "Ice.hpp"

Ice::Ice()
{
    std::cout << "MateriaSource constructor called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "MateriaSource destructor called" << std::endl;
}

Ice::Ice(const Ice &obj)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = obj;
}

Ice &Ice::operator=(const Ice &rhs)
{

	std::cout << "Ice copy assingmeent operator called" << std::endl;
	this->Materia= rhs.Materia;
	return *this;
}