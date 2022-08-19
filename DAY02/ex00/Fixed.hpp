# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
    int                 value;
    const static int    no_bin_bits;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed& obj);
};


# endif