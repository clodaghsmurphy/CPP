#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

    private:
    std::string name;
    public:
    DiamondTrap(std::string name);
    ~DiamondTrap();
    DiamondTrap();
    DiamondTrap(const DiamondTrap &obj);
    DiamondTrap &operator=(const DiamondTrap &rhs);
    using ScavTrap::attack;
    void    whoAmI();
    void    print();
    
};

#endif 