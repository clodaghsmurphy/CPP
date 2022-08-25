#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap("Mr.Clap");
    ScavTrap scag("Mr.Scav");

    std::cout << std::endl << "  SCAV STATS  " << std::endl;

    std::cout << clap.get_name() << std::endl;
    std::cout << clap.get_attack() << std::endl;
    std::cout << clap.get_energy() << std::endl;
    std::cout << clap.get_hpoints() << std::endl;


    std::cout << std::endl << "  SCAV STATS  " << std::endl;

    std::cout << scag.get_name() << std::endl;
    std::cout << scag.get_attack() << std::endl;
    std::cout << scag.get_energy() << std::endl;
    std::cout << scag.get_hpoints() << std::endl;
    std::cout << std::endl;

    scag = ScavTrap("jones");
    std::cout << std::endl
              << "  SCAV STATS  " << std::endl;

    std::cout << scag.get_name() << std::endl;
    std::cout << scag.get_attack() << std::endl;
    std::cout << scag.get_energy() << std::endl;
    std::cout << scag.get_hpoints() << std::endl;
    std::cout << std::endl;

    scag.guardGate();
}