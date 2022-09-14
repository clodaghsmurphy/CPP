#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

# include "Materia.hpp"

class AMateria;

class ICharacter {
    protected:
    std::string name;
    public:
    ICharacter(std::string name);
    virtual ~ICharacter();
    ICharacter(const ICharacter &obj);
    virtual ICharacter &operator=(const ICharacter &rhs);
    virtual std::string const &getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter & target) = 0;
};

#endif