# include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap("Mr.Clap");
    ScavTrap scag("Mr.Scav");
    FragTrap frag("Mr.Frag");

    std::cout << std::endl
              << "  CLAP STATS  " << std::endl;

    std::cout << clap.get_name() << std::endl;
    std::cout << clap.get_attack() << std::endl;
    std::cout << clap.get_energy() << std::endl;
    std::cout << clap.get_hpoints() << std::endl;

    std::cout << std::endl
              << "  SCAV STATS  " << std::endl;

    std::cout << scag.get_name() << std::endl;
    std::cout << scag.get_attack() << std::endl;
    std::cout << scag.get_energy() << std::endl;
    std::cout << scag.get_hpoints() << std::endl;
    std::cout << std::endl;

    std::cout << std::endl
              << "  FRAG STATS  " << std::endl;

    std::cout << frag.get_name() << std::endl;
    std::cout << frag.get_attack() << std::endl;
    std::cout << frag.get_energy() << std::endl;
    std::cout << frag.get_hpoints() << std::endl;
    std::cout << std::endl;

    scag = ScavTrap("jones");
    std::cout << std::endl
              << "  SCAV STATS  " << std::endl;

    std::cout << scag.get_name() << std::endl;
    std::cout << scag.get_attack() << std::endl;
    std::cout << scag.get_energy() << std::endl;
    std::cout << scag.get_hpoints() << std::endl;
    std::cout << std::endl;

    clap.attack(scag.get_name());
    scag.takeDamage(5);
    scag.guardGate();
    frag.beRepaired(5);
    frag.highFiveGuys();
    return (0);
}