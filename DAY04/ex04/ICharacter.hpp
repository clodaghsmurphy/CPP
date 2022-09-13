#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

# include <iostream>
# include "Materia.hpp"

class ICharacter {
    protected:
    //AMateria *inventory[4];
    ICharacter();
    virtual ~ICharacter();
    virtual std::string const &getName() const = 0;
    //virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter & target) = 0;
};

#endif