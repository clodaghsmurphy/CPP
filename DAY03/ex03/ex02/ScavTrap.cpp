   # include "ScavTrap.hpp"
   
   ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
        std::cout << "Default ScavTrap constructor called for " << name << std::endl;
        this->name = name;
        this->AttackDamage = 20;
        this->HitPoints = 100;
        this->EnergyPoints = 50;
    
    }
    ScavTrap::~ScavTrap(){
        std::cout << "Default ScavTrap destructor called for " << name << std::endl;
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