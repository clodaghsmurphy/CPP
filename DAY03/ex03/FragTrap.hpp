# ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
    public:
    //FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(){return;};
    FragTrap(const FragTrap &obj);
    FragTrap &operator=(const FragTrap &rhs);
    void highFiveGuys();
    protected:
    std::string _name;
    std::string _get_name();
};

# endif