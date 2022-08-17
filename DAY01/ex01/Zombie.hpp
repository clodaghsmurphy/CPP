# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib> 

class Zombie{
    private:
    std::string name;
    public:
    Zombie();
    ~Zombie();
    void    announce();
    void    give_name(std::string name);
};

# endif