#ifndef MATERIA_HPP
#define MATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
    std::string type;
    public:
    AMateria(std::string const &type);
    virtual ~AMateria();
    AMateria(const AMateria &obj);
    virtual AMateria &operator=(const AMateria &rhs);
    std::string const &getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif