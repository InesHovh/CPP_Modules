#include "iter.hpp"

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    char b[] = {'a', 'b', 'c', 'd', 'f', 'e'};
    float c[] = {21.1, 45.7890, 4567};

    iter<int>(a, 5, print);
    iter<char>(b, 6, print);
    iter<float>(c, 3, print);

    std::cout << std::endl;

    iter<int>(a, 5, increment);
    iter<char>(b, 6, increment);
    iter<float>(c, 3, increment);

}

// class Awesome
// {
//     public:
//         Awesome( void ) : _n( 42 ) { return; }
//         int get( void ) const { return this->_n; }
//     private:
//         int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; }

// int main() {
//     int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
//     Awesome tab2[5];
//     iter(tab, 5, print);
//     iter( tab2, 5, print );
//     return 0;
// }