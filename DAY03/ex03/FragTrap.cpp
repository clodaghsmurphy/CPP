# include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Default FragTrap constructor called for " << name << std::endl;
    this->_name = name;
    this->AttackDamage = 100;
    this->HitPoints = 100;
    this->EnergyPoints = 30;
   
}

FragTrap::~FragTrap()
{
    std::cout << "Default FragTrap destructor called for " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = obj;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{

    std::cout << "FragTrap copy assingmeent operator called" << std::endl;
    this->name = rhs.get_name();
    this->HitPoints = rhs.get_hpoints();
    this->EnergyPoints = rhs.get_energy();
    this->AttackDamage = rhs.get_attack();
    return *this;
}

void    FragTrap::highFiveGuys(){
    std::cout << this->name << " Wants a high give guyzzzz" << std::endl;
}

std::string FragTrap::_get_name() {
    return (this->_name);
}