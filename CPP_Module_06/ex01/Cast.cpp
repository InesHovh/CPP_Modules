#include "Cast.hpp"

Cast::Cast() {}

Cast::Cast(const Cast &obj)
{
    *this = obj;
}

Cast &Cast::operator=(const Cast &obj)
{
    if (this != &obj)
        return (*this);
    return (*this);
}

uintptr_t Cast::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Cast::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

Cast::~Cast() {}

std::ostream &operator<<(std::ostream &obj, const Data &data)
{
    obj << "char: " << data.c << std::endl;
    obj << "int: " << data.i << std::endl;
    obj << "float: " << data.f << std::endl;
    obj << "double: " << data.d << std::endl;

    return (obj);
}
