   # include "ScavTrap.hpp"
   
   ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
        std::cout << "Default ScavTrap constructor called for " << name << std::endl;
        this->name = name;
        this->_AttackDamage = 20;
        this->_HitPoints = 100;
        this->_EnergyPoints = 50;
        
    
    }
    ScavTrap::~ScavTrap(){
        std::cout << "Default ScavTrap destructor called for " << name << std::endl;
    }

     ScavTrap::ScavTrap(){
        std::cout << "Default ScavTrap constructor called for " << name << std::endl;
        this->_AttackDamage = 20;
        this->_HitPoints = 100;
        this->_EnergyPoints = 50;
    }

    ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj){
       std::cout << "ScavTrap copy constructor called" << std::endl;
        *this = obj;
    }

    ScavTrap&  ScavTrap::operator =(const ScavTrap& rhs){
         
        std::cout << "ScavTrap copy assingmeent operator called" << std::endl;
        this->name = rhs.get_name();
        this->HitPoints = rhs.get_hpoints();
        this->EnergyPoints = rhs.get_energy();
        this->AttackDamage = rhs.get_attack();
        return *this;
    }

    void    ScavTrap::guardGate()
    {
        std::cout << name << " is on wall guard duty" << std::endl;
    }

unsigned int ScavTrap::_get_hpoints() const
{
    return this->_HitPoints;
}

unsigned int ScavTrap::_get_energy() const
{
    return this->_EnergyPoints;
}

unsigned int ScavTrap::_get_attack() const
{
    return this->_AttackDamage;
}

void    ScavTrap::attack(const std::string &target)
{
    if (this->EnergyPoints <= 0 || this->HitPoints <= 0)
    {
        if (this->HitPoints <= 0)
            std::cout << this->name << " has no life left to attack" << std::endl;
        else
            std::cout << "no energy left to to attack" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->name << " attacks " << target << std::endl;;
}
