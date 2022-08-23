# include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = roundf(0 * (1 << this->no_bin_bits));
};

Fixed::Fixed(const int val)
{
    this->value = roundf(val * (1 << this->no_bin_bits));
}

Fixed::Fixed(const float val)
{
    this->value = roundf((float)val * (1 << this->no_bin_bits));
}


Fixed::~Fixed()
{
    return ;
}

Fixed::Fixed(const Fixed& obj)
{
    *this = obj;
}

Fixed   Fixed::min(Fixed a, Fixed b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

Fixed   Fixed::max(Fixed a, Fixed b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

Fixed&  Fixed::operator =(const Fixed& rhs)
{
    this->value = rhs.getRawBits();
    return *this;
}

bool  Fixed::operator <(const Fixed& rhs)
{
    return (this->value < rhs.value);
    
}

bool  Fixed::operator >(const Fixed& rhs)
{
        return (this->value > rhs.value);

}

bool  Fixed::operator ==(const Fixed& rhs)
{
        return (this->value == rhs.value);

}

bool Fixed::operator !=(const Fixed& rhs)
{
    return (this->value != rhs.value);
}

bool  Fixed::operator <=(const Fixed& rhs)
{
        return (this->value <= rhs.value);

}

bool  Fixed::operator >=(const Fixed& rhs)
{
        return (this->value >= rhs.value);

}

Fixed&  Fixed::operator ++(void)
{
    this->value++;
    return *this;
}

Fixed  Fixed::operator ++(int x)
{
    Fixed temp;

    (void)x;
    temp.setRawBits(value++);
    return temp;
}

Fixed&  Fixed::operator --(void)
{
    this->value--;
    return *this;
}

Fixed  Fixed::operator --(int x)
{
    Fixed temp;

    (void)x;
    temp.setRawBits(value++);
    return temp;
}

Fixed  Fixed::operator +(const Fixed& rhs)
{
    Fixed temp(this->toFloat() + rhs.toFloat());
    return temp;
}

Fixed  Fixed::operator -(const Fixed& rhs)
{
    Fixed temp(this->toFloat() - rhs.toFloat());
    return temp;
}

Fixed  Fixed::operator *(const Fixed& rhs)
{
    Fixed temp(this->toFloat() * rhs.toFloat());
    return temp;
}

Fixed  Fixed::operator /(const Fixed& rhs)
{
    Fixed temp(this->toFloat() / rhs.toFloat());
    return temp;
}

std::ostream&  operator <<(std::ostream &output, const Fixed& rhs)
{
    output << rhs.toFloat();
    return output;
}

int Fixed::getRawBits(void) const
{
    return (this->value);
}

void    Fixed::setRawBits(int const raw)
{
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

