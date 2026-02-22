#include <iostream>
// #include <cmath>

// int main ()
// {
//    char* a;
//     double aa = strtod("-56.65", &a);
    
//     // if(std::isinf(aa))
//     std::cout << static_cast<float>(aa) << std::endl;
// }

void legacyPrintFunction(char* text) {
    // This old function doesn't use 'const char*', but it just prints.
        std::cout << text << std::endl;
}

int main() {
    const char* greeting = "Hello World";
    
    // legacyPrintFunction(greeting); // ERROR: Cannot pass const to non-const

    // Solution: Temporarily strip away the 'const'
    legacyPrintFunction(const_cast<char*>(greeting)); 
    
    return 0;
}