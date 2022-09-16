# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) 
{
    std::cout << "Default Diamond constructor called for " << name << std::endl;
    this->DiamondTrap::name = name;
    FragTrap::set_attack();

    this->AttackDamage = FragTrap::AttackDamage;
    this->HitPoints = FragTrap::HitPoints;
    this->EnergyPoints = ScavTrap::EnergyPoints;
};

DiamondTrap::DiamondTrap() : ClapTrap("Generic_clap_name" ), FragTrap("Generic"), ScavTrap("Generic")
{
    this->name = "Generic";
    std::cout << "Default Diamond constructor called for " << name << std::endl;
    this->AttackDamage = FragTrap::AttackDamage;
    this->HitPoints = FragTrap::HitPoints;
    this->EnergyPoints = ScavTrap::EnergyPoints;
    std::cout << "scav energy" << FragTrap::AttackDamage << std::endl;
};

DiamondTrap::~DiamondTrap(){
    std::cout << "Default Diamond destructor called for "  << this->name << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "My name is " << this->name << std::endl;
    std::cout << "Mt parents name is " << this->ClapTrap::get_name()<< std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj),FragTrap(obj) , ScavTrap(obj)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = obj;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{

    std::cout << "DiamondTrap copy assingmeent operator called" << std::endl;
    this->name = rhs.name;
    this->HitPoints = rhs.HitPoints;
    this->EnergyPoints = rhs.EnergyPoints;
    this->AttackDamage = rhs.AttackDamage;
    this->ClapTrap::name = rhs.ClapTrap::name;
    return *this;
}

void    DiamondTrap::print(){
    std::cout << "NAME : " << this->name << std::endl;
    std::cout << "ATTACK DAMAGE : " << this->AttackDamage << std::endl;
    std::cout << "ENERGY : " << this->EnergyPoints << std::endl;
    std::cout << "HIT POINTS : " << this->HitPoints << std::endl;
    std::cout << std::endl;
}