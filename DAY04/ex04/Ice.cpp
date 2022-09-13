# include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "MateriaSource constructor called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "MateriaSource destructor called" << std::endl;
}

Ice::Ice(const Ice &obj) : AMateria("ice")
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = obj;
}

Ice &Ice::operator=(const Ice &rhs)
{
	this->type = rhs.type;
	std::cout << "Ice copy assingmeent operator called" << std::endl;
	return *this;
}