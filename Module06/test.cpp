#include <iostream>
#include <cmath>

int main ()
{
   char* a;
    double aa = strtod("-56.65", &a);
    
    // if(std::isinf(aa))
    std::cout << static_cast<float>(aa) << std::endl;
}