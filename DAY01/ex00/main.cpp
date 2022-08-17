# include "Zombie.hpp"

int	main()
{
	std::string name1;
	std::string name2;
	std::string name3;
	std::string name4;

	name1 = "Hugo";
	name2 = "Burt";
	name3 = "Derek";
	name4 = "Eugene";

	Zombie *zombie1 = newZombie(name1);
	zombie1->announce();
	Zombie *zombie2 = newZombie(name2);
	zombie2->announce();
	delete(zombie1);
	delete(zombie2);
	randomChump(name3);
	randomChump(name4);
}