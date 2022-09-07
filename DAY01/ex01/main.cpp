# include "Zombie.hpp"
# include "header.h"

int main(int ac, char **av)
{
    int n = 0;
    Zombie  *zombie;

    if (ac < 2)
    {
        std::cout << "Please enter number of Zombies required" << std::endl;
        return (1);
    }
    n = std::atoi(av[1]);
    if (n <= 0 )
    {
        std::cout << "Zombies can't be negative or 0" << std::endl;
        return (1);
    }
    zombie = zombieHorde(n, "Bastien");
    for (int i = 0; i < n; i++)
    {
        zombie[i].announce();
    }
    delete[] zombie;

}