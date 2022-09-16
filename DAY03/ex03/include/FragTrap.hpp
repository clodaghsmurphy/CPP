# ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public virtual  ClapTrap{
    public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(const FragTrap &obj);
    FragTrap &operator=(const FragTrap &rhs);
    void   set_attack();
    void   set_name(std::string name);
    void    print();
    void highFiveGuys();
    private:
    std::string name;
};

# endif