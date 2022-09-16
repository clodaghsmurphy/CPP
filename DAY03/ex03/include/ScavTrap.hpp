# ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual  ClapTrap {
    public:
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap();
    ScavTrap(const ScavTrap& obj);
    ScavTrap&  operator =( const ScavTrap& rhs);
    void    guardGate();
    void    attack(const std::string &target);
    void    print();
    private:
    std::string name;
};

# endif