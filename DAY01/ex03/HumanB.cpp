# include "Weapon.hpp"
# include "HumanA.hpp"
# include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
}

HumanB::~HumanB()
{
    this->weapon = NULL;
    return ;
}

void    HumanB::attack()
{
    std::cout << this->name;
    if (!this->weapon)
        std::cout << " attacks with their nothing" << std::endl;
    else
        std::cout << " attacks with their " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}