#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
    int fixed_point;
    static const int fractional_bits = 8;
public:
    Fixed();
    Fixed(const int integer_num);
    Fixed(const float float_num);
    Fixed(const Fixed &fixed);

    Fixed &operator=(const Fixed &fixed);

    float toFloat(void) const;
    int toInt(void) const;

    void setRawBits(int const point);
    int getRawBits(void) const;

    ~Fixed();
};

std::ostream &operator<<(std::ostream &obj, const Fixed &fixed);

#endif