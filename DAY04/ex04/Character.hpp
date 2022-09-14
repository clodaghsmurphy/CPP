#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include "ICharacter.hpp"
# include <vector>

class Character : public ICharacter {
    public:
    Character(std::string name);
    ~Character();
    Character(const Character &obj);
    Character &operator=(const Character &rhs);
    std::string const &getName() const;
    void    equip(AMateria *m);
    void    unequip(int idx);
    void    use(int idx, ICharacter &target);
    private:
    std::string name;
    AMateria *inventory[4];
    std::vector<AMateria *> trash;
};

#endif