# ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource &obj);
    MateriaSource &operator=(const MateriaSource &rhs);
    void learnMateria(AMateria *_materia);
    AMateria* createMateria(std::string const &type);
};

#endif