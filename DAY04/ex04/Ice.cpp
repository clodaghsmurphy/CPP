# include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
   this->type = "ice";
}

Ice::~Ice()
{
    //std::cout << "MateriaSource destructor called" << std::endl;
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

std::string const &Ice::getType() const
{
	return this->type;
}

Ice*	Ice::clone() const
{
	Ice* res = new Ice();
	return res;
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots and ice bolt at " << target.getName() << " *" << std::endl;
}