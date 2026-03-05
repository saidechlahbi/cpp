#include "whatever.hpp"

int main ()
{
    int a, b;
    a = 4; b = 9;

    // long  c, d;
    // c = 0; d = 9;

    std::cout << "the max between two integers" << std::endl;
    std::cout << "The max between : a = " << a << " b = " << b 
        << " is --> " << max<int>(a,b) << std::endl; 

    std::cout << "\n\nthe min between two integers" << std::endl;
    std::cout << "The min between : a = " << a << " b = " << b 
        << " is --> " << min<int>(a,b) << std::endl; 

    swap<int>(&a, &b);
    std::cout << "\nthe swap between two integers" << std::endl;
    std::cout << "The swap between : a = " << a << " b = " << b 
        << " changed to --> a = " << a << " b = "<< b  << std::endl; 


    // std::cout << "\nthe max between two longs" << std::endl;
    // std::cout << "The max between : c = " << a << " d = " << b 
    //     << " is --> " << max<long>(c, d) << std::endl; 



    // std::cout << "\nthe min between two longs" << std::endl;
    // std::cout << "The min between : c = " << a << " d = " << b 
    //     << " is --> " << min<long>(c,d) << std::endl; 
}