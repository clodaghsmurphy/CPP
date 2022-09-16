# include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Default FragTrap constructor called for " << name << std::endl;
    this->name = name;
    this->AttackDamage = 30;
    this->HitPoints = 100;
    this->EnergyPoints = 100;
}
FragTrap::~FragTrap()
{
    std::cout << "Default FragTrap destructor called for " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = obj;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{

    std::cout << "FragTrap copy assingmeent operator called" << std::endl;
    this->name = rhs.name + "_copy";
    this->HitPoints = rhs.HitPoints;
    this->EnergyPoints = rhs.EnergyPoints;
    this->AttackDamage = rhs.AttackDamage;
    return *this;
}

void    FragTrap::highFiveGuys(){
    std::cout << this->name << " Wants a high give guyzzzz" << std::endl;
}