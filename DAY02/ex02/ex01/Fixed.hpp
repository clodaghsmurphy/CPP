# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
    int                 value;
    const static int    no_bin_bits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const int val);
    Fixed(const float val);
    Fixed(const Fixed& obj);
    Fixed&  operator =( const Fixed& rhs);
    friend std::ostream&  operator <<(std::ostream &output, const Fixed& rhs);
    int getRawBits(void) const;
    void    setRawBits(const int raw);
    int     toInt(void) const;
    float   toFloat(void) const;
};


# endif