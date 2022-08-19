# include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = 0;
}

Fixed::~Fixed()
{
    return ;
}

Fixed::Fixed(const Fixed& obj)
{
    value = obj.value;
    no_bin_bits = obj.no_bin_bits;
    std::cout << "Copy constructor called" <<std::endl;
}