#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap("Mr.Clap");
    ScavTrap scag("Mr.Scav");

    std::cout << std::endl << "  CLAP STATS  " << std::endl;

    std::cout << "NAME : " << clap.get_name() << std::endl;
    std::cout <<"ATTACK DAMAGE : " <<  clap.get_attack() << std::endl;
    std::cout <<  "ENERGY : " << clap.get_energy() << std::endl;
    std::cout << "HIT POINTS : " << clap.get_hpoints() << std::endl;


    std::cout << std::endl << "  SCAV STATS  " << std::endl;

    std::cout << "NAME : " << scag.get_name() << std::endl;
    std::cout << "ATTACK DAMAGE : " << scag.get_attack() << std::endl;
    std::cout << "ENERGY : " << scag.get_energy() << std::endl;
    std::cout << "HIT POINTS : " << scag.get_hpoints() << std::endl;
    std::cout << std::endl;

    scag = ScavTrap("Jones");
    std::cout << std::endl
              << "  SCAV STATS  " << std::endl;

    std::cout << "NAME : " << scag.get_name() << std::endl;
    std::cout << "ATTACK DAMAGE : " << scag.get_attack() << std::endl;
    std::cout << "ENERGY : " << scag.get_energy() << std::endl;
    std::cout << "HIT POINTS : " << scag.get_hpoints() << std::endl;
    std::cout << std::endl;

    scag.guardGate();
    clap.attack(scag.get_name());
    scag.attack(clap.get_name());
}