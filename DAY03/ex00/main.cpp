# include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("clap1");
    ClapTrap clap2("clap2");
    ClapTrap clap3("clap3");

    clap.attack(clap2.get_name());
    clap2.takeDamage(10);

    clap2.beRepaired(1);
    clap2.attack(clap.get_name());

    clap.attack(clap3.get_name());
    clap3.takeDamage(5);
    clap3.beRepaired(2);
    clap3.attack(clap.get_name());
    return (0);
}