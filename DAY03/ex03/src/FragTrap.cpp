# include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Default FragTrap constructor called for " << name << std::endl;
    this->name = name;
    this->AttackDamage = 100;
    this->HitPoints = 100;
    this->EnergyPoints = 30;
   
}

FragTrap::FragTrap() : ClapTrap("Generic")
{
    this->name = "Generic";
    std::cout << "Default FragTrap constructor called for " << name << std::endl;
    this->AttackDamage = 100;
    this->HitPoints = 100;
    this->EnergyPoints = 30;
   
}

void FragTrap::set_attack(){
    this->AttackDamage = 100;
}

void    FragTrap::set_name(std::string name)
{
    this->name = name;
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
    this->name = rhs.get_name();
    this->HitPoints = rhs.get_hpoints();
    this->EnergyPoints = rhs.get_energy();
    this->AttackDamage = rhs.get_attack();
    return *this;
}

void    FragTrap::highFiveGuys(){
    std::cout << this->name << " Wants a high give guyzzzz" << std::endl;
}

void    FragTrap::print(){
    std::cout << "NAME : " << this->name << std::endl;
    std::cout << "ATTACK DAMAGE : " << this->AttackDamage << std::endl;
    std::cout << "ENERGY : " << this->EnergyPoints << std::endl;
    std::cout << "HIT POINTS : " << this->HitPoints << std::endl;
    std::cout << std::endl;
}
