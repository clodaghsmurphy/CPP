# include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}
Zombie::~Zombie()
{
	std::cout << this->name <<" was destroyed" << std::endl;
}

Zombie* newZombie(std::string name)
{
	Zombie *_zombie = new Zombie(name);

	if (!_zombie)
		return (NULL);
	return (_zombie);
}

void randomChump(std::string name)
{
	Zombie _zombie(name);

	_zombie.announce();
}

void	Zombie::announce()
{
	std::cout << this->name << ":BraiiiiiinnnzzzZ..." << std::endl;
}