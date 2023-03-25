#include "Cast.hpp"

Cast::Cast() {}

Cast::Cast(std::string _arg)
{
    try
    {
       arg = std::stod(_arg);
    }
    catch(...)
    {
       temp = 1;
    }
    std::cout << std::fixed;
    std::cout.precision(1);
    toChar();
    toInt();
    toFloat();
    toDouble();
}

Cast::Cast(const Cast &obj)
{
    *this = obj;
}

Cast &Cast::operator=(const Cast &obj)
{
    if(this != &obj)
    {
        arg = obj.arg;
        temp = obj.temp;
    }
    return (*this);
}

void	Cast::toChar()
{
    if (isnan(arg) || temp)
        std::cout << "char: impossible" << std::endl;
    else if (!isprint(arg))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(arg) << "'"<< std::endl;
}

void	Cast::toInt()
{
    if(isnan(arg) || temp || arg > INT_MAX || arg < INT_MIN)
        std::cout << "int: impossble" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(arg) << std::endl;
}

void	Cast::toFloat()
{
    std::cout << std::fixed;
    std::cout.precision(1);
    
    if (temp)
        std::cout << "float: impossble" << std::endl;
    else
        std::cout << "float: " << static_cast<float>(arg) << "f" << std::endl;
}

void	Cast::toDouble()
{
    if (temp)
        std::cout << "double: impossble" << std::endl;
    else
        std::cout << "double: " << static_cast<double>(arg) << std::endl;
}

Cast::~Cast() {}