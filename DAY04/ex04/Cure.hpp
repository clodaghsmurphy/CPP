# ifndef CURE_HPP
# define CURE_HPP

# include "Materia.hpp"

class Cure : public AMateria{
    public:
    Cure();
    ~Cure();
    Cure(const Cure &obj);
    Cure &operator=(const Cure &rhs);
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif