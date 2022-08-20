# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
    int                 value;
    const static int    no_bin_bits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed& obj);
    Fixed&  operator =( const Fixed& rhs);
    int getRawBits(void) const;
    void    setRawBits(const int raw);
};


# endif