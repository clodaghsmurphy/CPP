# include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "Please enter Harl command" << std::endl;
        return (1);
    }
    Harl _harl;

    _harl.complain(av[1]);
    return (0);
}