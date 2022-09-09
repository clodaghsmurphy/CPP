# ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
    public:
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap();
    ScavTrap(const ScavTrap& obj);
    ScavTrap&  operator =( const ScavTrap& rhs);
    void    guardGate();
    void    attack(const std::string &target);
    unsigned int _get_hpoints() const;
    unsigned int _get_energy() const;
    unsigned int _get_attack() const;
    protected:
    std::string name;
    unsigned int    _HitPoints;
    unsigned int    _EnergyPoints;
    unsigned int    _AttackDamage;
};

# endif