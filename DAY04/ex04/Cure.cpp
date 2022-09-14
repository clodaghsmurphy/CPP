# include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    this->type = type;
}

Cure::~Cure()
{
   // std::cout << "Cure destructor called" << std::endl;
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

std::string const &Cure::getType() const
{
	return this->type;
}

Cure*	Cure::clone() const
{
	Cure* res = new Cure();
	return res;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" <<std::endl;
}