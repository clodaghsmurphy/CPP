# include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
# include "DiamondTrap.hpp"

int main()
{
     ClapTrap clap("Mr.Clap");
   ScavTrap scag("Mr.Scav");
    FragTrap frag("Mr.Frag");
    DiamondTrap diamond("Mr.Diamond");

   std::cout << std::endl
              << "  CLAP STATS  " << std::endl;

   std::cout << "NAME : " << clap.get_name() << std::endl;
    std::cout <<"ATTACK DAMAGE : " <<  clap.get_attack() << std::endl;
    std::cout <<  "ENERGY : " << clap.get_energy() << std::endl;
    std::cout << "HIT POINTS : " << clap.get_hpoints() << std::endl;

    std::cout << std::endl
              << "  FRAG STATS  " << std::endl;

     std::cout << "NAME : " << frag.get_name() << std::endl;
    std::cout << "ATTACK DAMAGE : " << frag.get_attack() << std::endl;
    std::cout << "ENERGY : " << frag.get_energy() << std::endl;
    std::cout << "HIT POINTS : " << frag.get_hpoints() << std::endl;
    std::cout << std::endl;

    std::cout << std::endl
              << "  SCAV STATS  " << std::endl;

     std::cout << "NAME : " << scag.get_name() << std::endl;
    std::cout << "ATTACK DAMAGE : " << scag._get_attack() << std::endl;
    std::cout << "ENERGY : " << scag._get_energy() << std::endl;
    std::cout << "HIT POINTS : " << scag._get_hpoints() << std::endl;
    std::cout << std::endl;

     std::cout << std::endl 
              << "  DIAMOND STATS  " << std::endl;

    std::cout << "NAME : " << diamond.get_name() << std::endl;
    std::cout << "ATTACK DAMAGE : " << diamond.get_attack() << std::endl;
    std::cout << "ENERGY : " << diamond.get_energy() << std::endl;
    std::cout << "HIT POINTS : " << diamond.get_hpoints() << std::endl;
    std::cout << std::endl;

    diamond.attack(scag.get_name());
    diamond.highFiveGuys();
    diamond.guardGate();
    diamond.whoAmI();
    std::cout << std::endl;
    std::cout << std::endl;
    return (0);
}