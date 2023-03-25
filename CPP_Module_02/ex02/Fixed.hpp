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

    bool operator>(Fixed const &num) const;
    bool operator<(Fixed const &num) const;
    bool operator>=(Fixed const &num) const;
    bool operator<=(Fixed const &num) const;
    bool operator==(Fixed const &num) const;
    bool operator!=(Fixed const &num) const;

    Fixed const operator+(Fixed const &num);
    Fixed const operator-(Fixed const &num);
    Fixed const operator*(Fixed const &num);
    Fixed const operator/(Fixed const &num);

    Fixed   const &operator++ (void);
    Fixed   const operator++ (int);
    Fixed   const &operator-- (void);
    Fixed   const operator-- (int);

    Fixed static min(Fixed num1, Fixed num2);
    Fixed static max(Fixed num1, Fixed num2);

    float toFloat(void) const;
    int toInt(void) const;

    void setRawBits(int const point);
    int getRawBits(void) const;

    ~Fixed();
};

std::ostream &operator<<(std::ostream &obj, const Fixed &fixed);

#endif