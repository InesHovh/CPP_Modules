#include "Cast.hpp"

int main(void)
{
    Cast c;
    Data    *data = new Data('A', 42, 42.05f, 42.5);
    uintptr_t ptr = c.serialize(data);
    Data    *check = c.deserialize(ptr);
    
    std::cout << std::endl;
    std::cout << "data address: " << data << std::endl;
    std::cout << "ptr address: " << &ptr << std::endl;
    std::cout << "check address: " << check << std::endl;
    std::cout << std::endl;
    std::cout << "data\n" << (*data) << std::endl;
    std::cout << "ptr: " << ptr << std::endl;
    std::cout << "check\n" << (*check) << std::endl;

}