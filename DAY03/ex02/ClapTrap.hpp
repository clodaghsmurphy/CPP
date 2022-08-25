# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
    protected:
    std::string name;
    unsigned int    HitPoints;
    unsigned int    EnergyPoints;
    unsigned int    AttackDamage;
    public:
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(const ClapTrap& obj);
    ClapTrap&  operator =( const ClapTrap& rhs);
    void    attack(const std::string &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    unsigned int get_hpoints() const;
    unsigned int get_energy() const;
    unsigned int get_attack() const;
    std::string get_name() const;
};



# endif