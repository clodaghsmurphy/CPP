# ifndef CURE_HPP
# define CURE_HPP

# include "Materia.hpp"

class AMateria;

class Cure : public AMateria{
    public:
    Cure();
    ~Cure();
    Cure(const Cure &obj);
    Cure &operator=(const Cure &rhs);
    std::string const &getType() const;
    Cure* clone() const;
    void use(ICharacter& target);
};

#endif