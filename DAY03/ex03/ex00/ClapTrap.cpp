# include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Default ClapTrap constructor called for " << name << std::endl;
    this->name = name;
    this->AttackDamage = 0;
    this->HitPoints = 10;
    this->EnergyPoints = 10;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called for " << this->name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
    std::cout << "Copy constructor called for " << obj.name << std::endl;
    *this = obj;
}

ClapTrap&  ClapTrap::operator =( const ClapTrap& rhs)
{
    std::cout << "copy assingmeent operator called for " << rhs.name << std::endl;
    this->name = rhs.get_name();
    this->HitPoints = rhs.get_hpoints();
    this->EnergyPoints = rhs.get_energy();
    this->AttackDamage = rhs.get_attack();
    return *this;
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->EnergyPoints <= 0 || this->HitPoints <= 0)
    {
        if (this->HitPoints <= 0)
            std::cout << this->name << " has no life left to attack" << std::endl;
        else
            std::cout << "no energy left to to attack" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << std::endl;;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << name << " takes " << amount << " damage " << std::endl;
    this->HitPoints -= amount;
   std::cout << this->name << " remaining life : " << this->HitPoints << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->EnergyPoints <= 0 || this->HitPoints <= 0)
    {
        if (this->HitPoints <= 0)
            std::cout << this->name << " has no life left to repair" << std::endl;
        else
            std::cout << this->name << " has no energy left to repair " << std::endl;
        return ;
    }
    std::cout << name << " repaired by " << amount << std::endl;
    this->HitPoints += amount;
}

std::string ClapTrap::get_name() const
{
    return this->name;
}

unsigned int ClapTrap::get_hpoints() const
{
    return this->HitPoints;
}

unsigned int ClapTrap::get_energy() const
{
    return this->EnergyPoints;
}

unsigned int ClapTrap::get_attack() const
{
    return this->AttackDamage;
}



