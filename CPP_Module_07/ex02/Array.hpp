#ifndef ARRAY_HPP
# define ARRAY_HPP
#define MAX_VAL 750

#include <iostream>

template <class T>
class Array
{
private:
    unsigned int    _size;
    T               *_array;
public:
    Array()
    {
        _size = 0;
        _array = new T;
    }

    Array(unsigned int n)
    {
        _size = n;
        _array = new T[_size];
    }

    Array(const Array &arr)
    {
        _size = arr._size;
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _array[i] = arr[i];    
    }

    Array &operator=(const Array &ref)
    {
        _size = ref._size;
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _array[i] = ref[i];
        return (*this);
    }

    T   &operator[](unsigned int i) const
    {
        if (i > _size) throw std::exception();
        return _array[i];
    }

    unsigned int size() const  { return _size; } 

    ~Array() { delete[] _array; }
};

#endif