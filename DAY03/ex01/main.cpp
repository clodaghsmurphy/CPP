# include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Mr.Clap");
    FlagTrap flag("Mr.Flag");

    std::cout << clap.get_name() << std::endl;
    std::cout << flag.get_name() << std::endl;
}