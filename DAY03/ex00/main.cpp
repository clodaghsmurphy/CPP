# include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("clap");
    ClapTrap clap2("clap2");
    ClapTrap clap3(ClapTrap("clap-copy"));
    ;

    clap.attack(clap2.get_name());
    clap.takeDamage(9);
    clap.attack(clap3.get_name());
    clap.beRepaired(1);
    clap.attack(clap3.get_name());
    std::cout << "Clap before copy assignemnt" << clap.get_name() << std::endl;
    clap = clap2;
    std::cout << "Clap after copy assignemnt" << clap.get_name() << std::endl;
    std::cout << "clap 3 = " << clap3.get_name() << std::endl;
}