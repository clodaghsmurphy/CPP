#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
    //std::cout << "IMateriaSource constructor called for " << std::endl;
}

IMateriaSource::~IMateriaSource()
{
    //std::cout << "IMateriaSource destructor called" << std::endl;
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
