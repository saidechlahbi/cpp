#include "iter.hpp"

template <typename T>
void printElement(T const& x)
{
    std::cout << x << "\t";
}
template <typename T>
void printElement(T & x)
{
    x += 1;
    std::cout << x << "\t";
}

int main()
{
    const int array1[] = {1, 4, 5, 7};
    iter(array1, 4, printElement<int>);
    std::cout << std::endl;

    int array2[] = {44, 42, 57, 76};
    iter(array2, 4, printElement<int>);
    std::cout << std::endl;
}