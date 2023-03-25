#ifndef CAST_HPP
# define CAST_HPP

#include <iostream>
#include <string>
#include <math.h>

struct Data
{
    Data(char _c, int _i, float _f, double _d)
        : c(_c), i(_i), f(_f), d(_d){}
    char    c;
    int     i;
    float   f;
    double  d;
};

class Cast
{
public:
    Cast();
	Cast(const Cast &obj);
	Cast &operator=(const Cast &obj);

    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);

	~Cast();
};

std::ostream &operator<<(std::ostream &obj, const Data &data);

#endif