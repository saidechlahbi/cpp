#include <iostream>
#include <iomanip>

int main()
{
    // Changed float to double
    float a = 2147483646.99999;
    double b = 0.1 + 0.1 + 0.1; 

    if (a == b) {
        std::cout << "a equals b" << std::endl;
    } else {
        std::cout << "a does not equal b" <<  sizeof(double) << std::endl; // The typical result!
    }
    printf("%.5f\n", a);
    // Output of the values (approximate):
    // a: 0.29999999999999998
    // b: 0.30000000000000004 
    // The tiny difference makes the '==' comparison fail.
   
    return 0;
}