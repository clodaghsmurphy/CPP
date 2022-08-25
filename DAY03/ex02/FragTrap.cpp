# include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
   std::cout << "Default Flag constructor called for " << name << std::endl;
    this->name = name;
    this->AttackDamage = 0;
    this->HitPoints = 10;
    this->EnergyPoints = 10;
}

FragTrap::~FragTrap()
{
    std::cout << "Flag destructor called for" << name << std::endl;
}