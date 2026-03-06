#include "Array.hpp"

int main ()
{
    Array<int> object(5);
    for (int i = 0; i < 5; i++)
        std::cout << object[i] << std::endl;
}