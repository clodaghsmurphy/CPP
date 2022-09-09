# include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" <<std::endl;
    return ;
}

Fixed::Fixed(const Fixed& obj)
{
    std::cout << "Copy constructor called" <<std::endl;
    value = obj.getRawBits();
}

Fixed&  Fixed::operator =(const Fixed& rhs)
{
    std::cout << "Copy assignement operator called" << std::endl;
    this->value = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "getRawBits member function called" << std::endl;
    this->value = raw;
}

