#include "iostream"

class abc
{
    public:
        int plus(int a, int b)
        {
            return a+b;
        }

        static int plusplus(int a, int b)
        {
            return a + b;
        }
};

int plus(int a, int b)
{
    return a+b;
}

int main ()
{
    // int (*action)(int, int);
    // action = &plus;
    // std::cout << action(1, 3)<< std::endl;

    
    // int (abc::*action)(int, int);
    // action = &abc::plus;
    // abc object;
    // std::cout << (object.*action)(1,2) << std::endl;


    int (*action2)(int, int);
    action2 = &abc::plusplus;
    std::cout << action2(1, 3) << std::endl;
}