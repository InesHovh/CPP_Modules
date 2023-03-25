#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
private:
    int _point;
    static const int number = 8;

public:
    Fixed();
    Fixed(const Fixed &fixed);
    Fixed &operator=(const Fixed &fixed);
    void setRawBits(int const point);
    int getRawBits(void) const;
    ~Fixed();
};

#endif