# ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
    public:
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(const FragTrap &obj);
    FragTrap &operator=(const FragTrap &rhs);
     void highFiveGuys();
     private:
    std::string name;
};

# endif