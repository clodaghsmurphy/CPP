#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
    std::cout << "MateriaSource constructor called" << std::endl;
}

IMateriaSource::~IMateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource &obj)
{
	std::cout << "IMateriaSource copy constructor called" << std::endl;
	*this = obj;
}

IMateriaSource &IMateriaSource::operator=(const IMateriaSource &rhs)
{

	std::cout << "IMateriaSource copy assingmeent operator called" << std::endl;
	for (int i = 0; i < 4 ; i++)
		this->Materia[i] = rhs.Materia[i];
	return *this;
}

void    IMateriaSource::learnMateria(AMateria *_materia)
{
    this->Materia[0] = _materia->getType();
}