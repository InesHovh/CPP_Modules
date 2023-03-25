#include  "Fixed.hpp"

Fixed::Fixed()
{
    fixed_point = 0;
}

Fixed::Fixed(const int integer_num)
{
    fixed_point = integer_num << fractional_bits;
}


Fixed::Fixed(const float float_num)
{
    fixed_point = roundf(float_num * (1 << fractional_bits));
}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    fixed_point = fixed.getRawBits();

    return (*this);
}

bool Fixed::operator>(Fixed const &num) const
{
    return (fixed_point > num.fixed_point);
}

bool Fixed::operator<(Fixed const &num) const
{
    return (fixed_point < num.fixed_point);
}

bool Fixed::operator>=(Fixed const &num) const
{
    return (fixed_point >= num.fixed_point);
}

bool Fixed::operator<=(Fixed const &num) const
{
    return (fixed_point <= num.fixed_point);
}

bool Fixed::operator==(Fixed const &num) const
{
    return (fixed_point == num.fixed_point);
}

bool Fixed::operator!=(Fixed const &num) const
{
    return (fixed_point != num.fixed_point);
}

Fixed const Fixed::operator+(Fixed const &num)
{
    Fixed n(toFloat() + num.toFloat());
    return (n);
}

Fixed const Fixed::operator-(Fixed const &num)
{
    Fixed n(toFloat() - num.toFloat());
    return (n);
}

Fixed const Fixed::operator*(Fixed const &num)
{
    Fixed n(toFloat() * num.toFloat());
    return (n);
}

Fixed const Fixed::operator/(Fixed const &num)
{
    Fixed n(toFloat() / num.toFloat());
    return (n);
}

Fixed const &Fixed::operator++(void)
{
    this->fixed_point += 1;
    
    return (*this);
}

Fixed const Fixed::operator++(int)
{
    Fixed num(*this);

    this->fixed_point += 1;
    return (num);
}

Fixed const &Fixed::operator--(void)
{
    this->fixed_point -= 1;
    return (*this);
}

Fixed const Fixed::operator--(int)
{
    Fixed num(*this);

    this->fixed_point -= 1;
    return (num);
}

Fixed Fixed::min(Fixed num1, Fixed num2)
{
    if (num1 > num2)
        return (num2);
    return (num1);
}

Fixed Fixed::max(Fixed num1, Fixed num2)
{
    if (num1 > num2)
        return (num1);
    return (num2);
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

Fixed::~Fixed() {}

std::ostream &operator<<(std::ostream &obj, const Fixed &fixed)
{
    obj << fixed.toFloat();
    return (obj);
}