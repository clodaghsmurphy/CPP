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
    return ;
}

void    HumanB::attack()
{
    std::cout << this->name;
    std::cout << " attacks with their " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}