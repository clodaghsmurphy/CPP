# include "Materia.hpp"
class AMateria;

AMateria::AMateria(const std::string &type) 
{
	//std::cout << "AMateria constructor called" << std::endl;
	this->type = type;
}

AMateria::~AMateria()
{
	//std::cout << "AMateria destructor called" << std::endl;
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

std::string const	&AMateria::getType() const 
{
	return this->type;
}

void	AMateria::use(ICharacter &target)
{
	target.use(0, target);
}
