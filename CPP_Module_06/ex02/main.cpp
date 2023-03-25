#include "Base.hpp"


Base *generate(void)
{
    srand(time(0));
    int i = rand() % 3;

    if (i == 1)
        return new A;
    else if (i == 2)
        return new B;
    return new C;
}

void identify(Base *p)
{
    A *a = dynamic_cast<A*>(p);
    B *b = dynamic_cast<B*>(p);
    C *c = dynamic_cast<C*>(p);

    if (p == NULL)
        return ;
    if (a)
        std::cout << "A" << std::endl;
    else if (b)
        std::cout << "B" << std::endl;
    else if (c)
        std::cout << "C" << std::endl;
    else
        std::cout << "Error" << std::endl;
}

void identify(Base &p)
{
    if ((void*)&p == NULL)
        return ;
    try
    {
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch(std::bad_cast){}

    try
    {
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B" << std::endl;
    }
    catch(std::bad_cast){}

    try
    {
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch(std::bad_cast){}
}

int main()
{
    Base *base = generate();

    identify(base);
    identify(*base);

    return (0);
}