#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called " << std::endl;

    _point = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called " << std::endl;

    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called " << std::endl;

    _point = fixed.getRawBits();
    return (*this);
}

void Fixed::setRawBits(int const point)
{
    _point = point;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called " << std::endl;
    
    return (_point);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called " << std::endl;
}