#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <iterator>

template <typename T>
int easyfind(T &type, int val)
{
    typename T::iterator f = std::find(type.begin(), type.end(), val);
    if (f == type.end())
        return (0);
    return (1);
}

#endif