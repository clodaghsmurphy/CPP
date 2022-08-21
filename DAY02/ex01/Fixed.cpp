# include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const int val)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = roundf(val * (1 << this->no_bin_bits));
}

Fixed::Fixed(const float val)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf((float)val * (1 << this->no_bin_bits));
}


Fixed::~Fixed()
{
    std::cout << "Destructor called" <<std::endl;
    return ;
}

Fixed::Fixed(const Fixed& obj)
{
    std::cout << "Copy constructor called" <<std::endl;
    *this = obj;
}

Fixed&  Fixed::operator =(const Fixed& rhs)
{
    std::cout << "Copy assignement operator called" << std::endl;
    this->value = rhs.getRawBits();
    return *this;
}

std::ostream&  operator <<(std::ostream &output, const Fixed& rhs)
{
    //std::cout << "<< assignement operator called" << std::endl;
    //this->value = rhs.getRawBits();
    output << rhs.toFloat();
    return output;
}

int Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "getRawBits member function called" << std::endl;
    this->value = raw;
}

int Fixed::toInt(void) const{
    int res;

    res = (int)this->value / (int)(1 << this->no_bin_bits); 
    return (res);
}

float   Fixed::toFloat(void) const{
    float   res;

    res = (float)this->value / (float)(1 << this->no_bin_bits);
    return (res);
}

