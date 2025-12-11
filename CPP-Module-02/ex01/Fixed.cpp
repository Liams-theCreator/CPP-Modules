#include "Fixed.hpp"

Fixed::Fixed(): fpoint_value(0)
{
    std::cout << "Default constructor called\n";  
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called\n";
    this->fpoint_value = num << this->fbits;
}
Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called\n";
    this->fpoint_value = roundf(num *(1 << this->fbits));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &Cpy): fpoint_value(Cpy.fpoint_value)
{
    std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &other)
        this->fpoint_value = other.fpoint_value;
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return fpoint_value;
}

void Fixed::setRawBits(int const raw)
{
    fpoint_value = raw;
}
float Fixed::toFloat(void) const
{
    return (float)this->fpoint_value / (1 << this->fbits);
}

int Fixed::toInt(void) const
{
    return this->fpoint_value >> this->fbits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &num)
{
    out << num.toFloat();
    return out;
}
