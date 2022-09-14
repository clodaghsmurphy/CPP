
# include "MateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

MateriaSource::MateriaSource()
{
   // std::cout << "Materia Source constructor called" << std::endl;
   for (int i = 0; i < 4; i++)
    this->Materia[i] = 0;
}


MateriaSource::~MateriaSource()
{
       //std::cout << "Materia Source constructor called" << std::endl;
       int i = 0;

       while (i < 4 && this->Materia[i] != 0)
       {
            delete this->Materia[i];
            i++;
       }
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    *this = obj;
}

MateriaSource   &MateriaSource::operator=(const MateriaSource &rhs)
{
	std::cout << "MateriaSource copy assingmeent operator called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->Materia[i] = rhs.Materia[i];
    return *this;
}

void    MateriaSource::learnMateria(AMateria *_materia)
{
    int i = 0;
    while (i < 4 && Materia[i])
    {
        if (Materia[i]->getType() == _materia->getType())
            break;
        i++;
    }
    if (i == 4)
    {
        std::cout << "Materia source inventory full - can't learn anymore materia" << std::endl;
    }
    this->Materia[i] = _materia;
    std::cout << "Learned Materia : " <<_materia->getType() << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    int         i = 0;

    while (i < 4)
    {
        if (this->Materia[i]->getType() == type)
        {
            break;
        }
        i++;
    }
    if (i == 4)
    { 
        std::cout << "Sorry Materia has not been learned yet" << std::endl;
        return (0);
    }
    std::cout << this->Materia[i]->getType() << " sucessfully created" << std::endl;
    return (this->Materia[i]->clone());
}