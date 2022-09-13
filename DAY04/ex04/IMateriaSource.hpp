#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "Materia.hpp"

class IMateriaSource {
    public:
    IMateriaSource();
    virtual ~IMateriaSource();
    IMateriaSource(const IMateriaSource &obj);
    IMateriaSource &operator=(const IMateriaSource &rhs);
    virtual void learnMateria(AMateria *_materia) = 0;
    virtual AMateria* createMateria(std::string const &type) = 0;
    protected:
    std::string Materia[4];
};

#endif
