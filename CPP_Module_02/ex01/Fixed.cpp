#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called " << std::endl;
    
    fixed_point = 0;
}

Fixed::Fixed(const int integer_num)
{
    std::cout << "Int constructor called " << std::endl;

    fixed_point = integer_num << fractional_bits;
}

Fixed::Fixed(const float float_num)
{
    std::cout << "Float constructor called " << std::endl;
    
    fixed_point = roundf(float_num * (1 << fractional_bits));
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called " << std::endl;

    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called " << std::endl;

    fixed_point = fixed.getRawBits();
    return (*this);
}

float Fixed::toFloat(void) const
{
    return ((float)fixed_point / (1 << fractional_bits));
}

int Fixed::toInt(void) const
{
    return (fixed_point >> fractional_bits);
}

void Fixed::setRawBits(int const point)
{
    fixed_point = point;
}

int Fixed::getRawBits(void) const
{
    return (fixed_point);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called " << std::endl;
}

std::ostream &operator<<(std::ostream &obj, const Fixed &fixed)
{
    obj << fixed.toFloat();
    return (obj);
}