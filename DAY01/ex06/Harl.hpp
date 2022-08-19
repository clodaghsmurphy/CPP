#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl{
    private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error();
    public:
    Harl();
    ~Harl();
    void    complain(std::string level);
};

int get_int(std::string string_level);
#endif