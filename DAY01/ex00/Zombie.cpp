# include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}
Zombie::~Zombie()
{
//	delete this;
}

Zombie* newZombie(std::string name)
{
	Zombie *_zombie = new Zombie(name);

	return (_zombie);
}

void randomChump(std::string name)
{
	Zombie *_zombie = new Zombie(name);

	_zombie->announce();
}

void	Zombie::announce()
{
	std::cout << this->name << ":BraiiiiiinnnzzzZ..." << std::endl;
}