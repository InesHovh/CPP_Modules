#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void increment(T element)
{
    element++;
    std::cout << element << " ";
}

template <typename T>
void print(T element)
{
    std::cout << element << " ";
}

template<typename T>
void iter(T *arr, int len, void(*call)(T))
{
    for (int i = 0; i < len; i++)
        call(arr[i]);
    std::cout << std::endl;
}

#endif