#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>
#include <array>

void vect()
{
    int check = 0;
    std::vector<int> vector;

    for (int i = 0; i < 100; i++)
        vector.push_back(i);
    check = easyfind(vector, 5);

    if (check == 1)
        std::cout << "Vector: element is found" << std::endl;
    else
        std::cout << "Vector: element is not found" << std::endl;
}

void list()
{
    int check = 0;
    std::list<int> lst;

    for (int i = 0; i < 100; i++)
        lst.push_back(i);
    check = easyfind(lst, 99);

    if (check == 1)
        std::cout << "List: element is found" << std::endl;
    else
        std::cout << "List: element is not found" << std::endl;
}

void deque()
{
    int check = 0;
    std::deque<int> deq;

    for (int i = 0; i < 100; i++)
        deq.push_back(i);
    check = easyfind(deq, 100);

    if (check == 1)
        std::cout << "Deque: element is found" << std::endl;
    else
        std::cout << "Deque: element is not found" << std::endl;
}

void arr()
{
    int check = 0;
    std::array<int, 100> array;

    for (int i = 0; i < 100; i++)
        array[i] = i;
    check = easyfind(array, 100);

    if (check == 1)
        std::cout << "Array: element is found" << std::endl;
    else
        std::cout << "Array: element is not found" << std::endl;
}

int main( void )
{
    vect();
    list();
    deque();
    arr();

    return (0);
}