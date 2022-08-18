# include "Weapon.hpp"
# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    this->name = name;
}

HumanA::~HumanA()
{
    return ;
}

void    HumanA::attack()
{
    std::cout << this->name;
    std::cout << " attacks with their " << this->weapon.getType() << std::endl;
}