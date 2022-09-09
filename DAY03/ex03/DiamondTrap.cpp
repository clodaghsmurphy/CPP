# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),  ScavTrap(name), FragTrap(name)
{
    std::cout << "Default Diamond constructor called for " << name << std::endl;
    this->name = name;
    ClapTrap::name = name + "_clap_name";
    this->EnergyPoints = ScavTrap::_EnergyPoints;
};

DiamondTrap::~DiamondTrap(){
    std::cout << this->name << " Diamond destructor called" << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "My name is " << this->name << std::endl;
    std::cout << "Mt parents name is " << ClapTrap::name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj),  ScavTrap(obj), FragTrap(obj)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = obj;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{

    std::cout << "DiamondTrap copy assingmeent operator called" << std::endl;
    this->name = rhs.get_name();
    this->HitPoints = rhs.get_hpoints();
    this->EnergyPoints = rhs.get_energy();
    this->AttackDamage = rhs.get_attack();
    return *this;
}