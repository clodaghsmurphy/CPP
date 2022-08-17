# include "Zombie.hpp"

Zombie::Zombie()
{
    return ;
}

Zombie::~Zombie()
{
    std::cout << this->name << " was destroyed" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name << ":BraiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::give_name(std::string name)
{
    this->name = name;
}