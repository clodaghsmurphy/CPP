#ifndef ICE_HPP
# define ICE_HPP

# include "Materia.hpp"

class AMateria;

class Ice : public AMateria {
    public:
    Ice();
    ~Ice();
    Ice(const Ice &obj);
    Ice &operator=(const Ice &rhs);
    std::string const &getType() const;
    Ice* clone() const;
    void use(ICharacter& target);
};
#endif