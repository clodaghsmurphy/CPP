
# include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "Materia Source constructor called" << std::endl;
}


MateriaSource::~MateriaSource()
{
       std::cout << "Materia Source constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    *this = obj;
}

 void    MateriaSource::learnMateria(AMateria *_materia)
{
    (void)_materia;
}