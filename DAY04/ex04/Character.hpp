#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include "Materia.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter {
    Character();
    ~Character();
    std::string const &getName() const;
    void equip(AMateria *m);
    void    unequip(int idx);
    void    use(int idx, ICharacter &target);
};

#endif